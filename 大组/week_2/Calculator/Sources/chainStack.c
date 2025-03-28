#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"chainStack.h"
#include"meun.h"

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(LinkStack* s) {
    return s->top == NULL;
}

// ��ʼ��ջ
void initStack(LinkStack* s) {
    s->top = NULL;
    s->length = 0;
}

// ��ջ
bool push(LinkStack* s, int x) {
    // �����½ڵ�
    StackNode* node = (StackNode*)malloc(sizeof(StackNode));
    // ͷ�巨
    node->data = x;
    node->next = s->top;
    s->top = node;
    s->length++;
    return true;
}

// ��ջ
int pop(LinkStack* s) {
    if (isEmpty(s)) {
        printf("����,ջ��");
        exit(1);
    }

    StackNode* p = s->top;
    int value = p->data;
    s->top = p->next;
    s->length--;
    free(p);

    return value;
}

// ��ȡջ��Ԫ��
int top(LinkStack* s) {
    if (isEmpty(s)) {
        printf("����ջ��");
        exit(1);
    }
    return s->top->data;
}

// ���ջ��
int size(LinkStack* s) {
    return s->length;
}

void handle_stack_operations() {
    LinkStack stack;
    initStack(&stack);
    int choice, value;
    
    do {
        display_stack_menu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: // ����ջ
                initStack(&stack);
                printf("ջ�Ѵ���\n");
                break;
            case 2: // ��ջ
                printf("������Ҫ��ջ����ֵ: ");
                scanf("%d", &value);
                if (push(&stack, value)) {
                    printf("��ջ�ɹ�\n");
                }
                break;
            case 3: // ��ջ
                if (!isEmpty(&stack)) {
                    value = pop(&stack);
                    printf("��ջԪ��: %d\n", value);
                } else {
                    printf("ջΪ��\n");
                }
                break;
            case 4: // ջ��
                printf("��ǰջ��: %d\n", size(&stack));
                break;
            case 5: // ��ӡջ
                if (isEmpty(&stack)) {
                    printf("ջΪ��\n");
                } else {
                    LinkStack temp;
                    initStack(&temp);
                    printf("ջ��Ԫ��(�Ӷ�����): ");
                    while (!isEmpty(&stack)) {
                        value = pop(&stack);
                        printf("%d ", value);
                        push(&temp, value);
                    }
                    while (!isEmpty(&temp)) {
                        push(&stack, pop(&temp));
                    }
                    printf("\n");
                }
                break;
        }
        if (choice != 0) {
            printf("\n���س�������...");
            getchar();
            getchar();
        }
    } while (choice != 0);
}