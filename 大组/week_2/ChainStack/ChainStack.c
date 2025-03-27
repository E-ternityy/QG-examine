#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct StackNode {
    int data; // ����
    struct StackNode* next; // ջ��ָ��
} StackNode;

typedef struct LinkStack {
    StackNode* top; // ջ��ָ��
    int length;
} LinkStack;

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