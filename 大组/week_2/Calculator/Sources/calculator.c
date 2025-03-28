#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "calculator.h"
#include "chainStack.h"
#include "meun.h"

#define MAX_EXPR_SIZE 100

// �ж������
int is_operator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')');
}

// ��ȡ��������ȼ�
int get_precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

// ��׺ת��׺���ʽ
char* infix_to_postfix(const char* infix) {
    char* postfix = (char*)malloc(MAX_EXPR_SIZE * sizeof(char));
    LinkStack operatorStack;  // �洢�����
    initStack(&operatorStack);
    int j = 0;
    
    for (int i = 0; infix[i]; i++) {
        if (isspace(infix[i])) continue;
        
        if (isdigit(infix[i]) || infix[i] == '.') {
            while (isdigit(infix[i]) || infix[i] == '.') {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';
            i--;
        }
        else if (infix[i] == '(') {
            push(&operatorStack, '(');
        }
        else if (infix[i] == ')') {
            while (!isEmpty(&operatorStack) && top(&operatorStack) != '(') {
                postfix[j++] = pop(&operatorStack);
                postfix[j++] = ' ';
            }
            if (!isEmpty(&operatorStack) && top(&operatorStack) == '(') {
                pop(&operatorStack);  // ����������
            }
        }
        else if (is_operator(infix[i])) {
            while (!isEmpty(&operatorStack) && 
                   top(&operatorStack) != '(' && 
                   get_precedence(top(&operatorStack)) >= get_precedence(infix[i])) {
                postfix[j++] = pop(&operatorStack);
                postfix[j++] = ' ';
            }
            push(&operatorStack, infix[i]);
        }
    }
    
    while (!isEmpty(&operatorStack)) {
        char op = pop(&operatorStack);
        if (op != '(') {
            postfix[j++] = op;
            postfix[j++] = ' ';
        }
    }
    
    postfix[j] = '\0';
    return postfix;
}

// �����׺���ʽ
float calculate_postfix(const char* postfix) {
    LinkStack numStack;
    initStack(&numStack);
    char* token = strtok((char*)postfix, " ");
    
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])) || 
            (strchr(token, '.') != NULL)) {
            // ����ת��
            double temp = atof(token) * 1000;
            push(&numStack, (int)temp);
        }
        else if (is_operator(token[0])) {
            double b = pop(&numStack) / 1000.0;
            double a = pop(&numStack) / 1000.0;
            double result;
            
            switch (token[0]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': 
                    if (b == 0) {
                        printf("���󣺳�������Ϊ0�r(�s_�t)�q\n");
                        return 0;
                    }
                    result = a / b;
                    break;
            }
            push(&numStack, (int)(result * 1000));
        }
        token = strtok(NULL, " ");
    }
    
    return pop(&numStack) / 1000.0;
}

void handle_calculator() {
    char expr[100];
    char c;
    
    do {
        display_calculator();
        scanf(" %[^\n]s", expr);
        
        if (expr[0] == 't' || expr[0] == 'T') {
            break;
        }
        
        char* postfix = infix_to_postfix(expr);
        double result = calculate_postfix(postfix);
        printf("\n"WHITE"���: %.3f\n", result); 
        free(postfix);
        
        printf("\n���س�������...");
        getchar();
        getchar();
    } while (1);
}
