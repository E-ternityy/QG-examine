#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct StackNode {
    int data; // 数据
    struct StackNode* next; // 栈顶指针
} StackNode;

typedef struct LinkStack {
    StackNode* top; // 栈顶指针
    int length;
} LinkStack;

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