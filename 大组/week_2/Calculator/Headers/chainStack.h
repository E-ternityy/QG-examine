#ifndef CHAINSTACK_H
#define CHAINSTACK_H

#include <stdbool.h>

typedef struct StackNode {
    int data; // ����
    struct StackNode* next; // ջ��ָ��
} StackNode;

typedef struct LinkStack {
    StackNode* top; // ջ��ָ��
    int length;
} LinkStack;

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(LinkStack* s);
// ��ʼ��ջ
void initStack(LinkStack* s);
// ��ջ
bool push(LinkStack* s, int x);
// ��ջ
int pop(LinkStack* s);
// ��ȡջ��Ԫ��
int top(LinkStack* s);
// ���ջ��
int size(LinkStack* s);
// ջ����
void handle_stack_operations();

#endif
