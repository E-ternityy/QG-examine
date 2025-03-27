#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX 100000

typedef struct SeqStack {
    int data[MAX];  // �洢Ԫ�ص�����
    int top;  // ջ��ָ��
} SeqStack;

// ��ʼ��ջ
void initStack(SeqStack* s) {
    s->top = -1;
}

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(SeqStack* s) {
    return s->top == -1;
}

// �ж�ջ�Ƿ�����
bool isFull(SeqStack* s) {
    return s->top == MAX - 1;
}

// ��ջ
bool push(SeqStack* s, int x) {
    if (isFull(s)) {  // ջ��
        return false;
    }
    s->top++;  // ջ��ָ���1
    s->data[s->top] = x;  // ����Ԫ�ط���ջ��
    return true;
}

// ��ջ����
int pop(SeqStack* s) {
    if (isEmpty(s)) { // ջ��
        printf("����,ջ��");
        exit(1);
    };
    // ��ȡջ��Ԫ��            
    return s->data[s->top--];// ջ��ָ���1
}

// ��ȡջ��Ԫ�أ�����ջ��
int top(SeqStack* s) {
    if (isEmpty(s)) {  // ջ��
        printf("����ջ��");
        exit(1);
    } 
    // ����ջ��Ԫ��
    return s->data[s->top];
}

// ���ջ��
int size(SeqStack* s) {
    return s->data + 1;
}