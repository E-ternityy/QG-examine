#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"chainStack.h"
#include"meun.h"

// 判断栈是否为空
bool isEmpty(LinkStack* s) {
    return s->top == NULL;
}

// 初始化栈
void initStack(LinkStack* s) {
    s->top = NULL;
    s->length = 0;
}

// 入栈
bool push(LinkStack* s, int x) {
    // 创建新节点
    StackNode* node = (StackNode*)malloc(sizeof(StackNode));
    // 头插法
    node->data = x;
    node->next = s->top;
    s->top = node;
    s->length++;
    return true;
}

// 出栈
int pop(LinkStack* s) {
    if (isEmpty(s)) {
        printf("错误,栈空");
        exit(1);
    }

    StackNode* p = s->top;
    int value = p->data;
    s->top = p->next;
    s->length--;
    free(p);

    return value;
}

// 获取栈顶元素
int top(LinkStack* s) {
    if (isEmpty(s)) {
        printf("错误，栈空");
        exit(1);
    }
    return s->top->data;
}

// 获得栈长
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
            case 1: // 创建栈
                initStack(&stack);
                printf("栈已创建\n");
                break;
            case 2: // 入栈
                printf("请输入要入栈的数值: ");
                scanf("%d", &value);
                if (push(&stack, value)) {
                    printf("入栈成功\n");
                }
                break;
            case 3: // 出栈
                if (!isEmpty(&stack)) {
                    value = pop(&stack);
                    printf("出栈元素: %d\n", value);
                } else {
                    printf("栈为空\n");
                }
                break;
            case 4: // 栈长
                printf("当前栈长: %d\n", size(&stack));
                break;
            case 5: // 打印栈
                if (isEmpty(&stack)) {
                    printf("栈为空\n");
                } else {
                    LinkStack temp;
                    initStack(&temp);
                    printf("栈内元素(从顶到底): ");
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
            printf("\n按回车键继续...");
            getchar();
            getchar();
        }
    } while (choice != 0);
}