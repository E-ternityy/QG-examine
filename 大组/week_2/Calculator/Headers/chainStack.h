#ifndef CHAINSTACK_H
#define CHAINSTACK_H

#include <stdbool.h>

typedef struct StackNode {
    int data; // 数据
    struct StackNode* next; // 栈顶指针
} StackNode;

typedef struct LinkStack {
    StackNode* top; // 栈顶指针
    int length;
} LinkStack;

// 判断栈是否为空
bool isEmpty(LinkStack* s);
// 初始化栈
void initStack(LinkStack* s);
// 入栈
bool push(LinkStack* s, int x);
// 出栈
int pop(LinkStack* s);
// 获取栈顶元素
int top(LinkStack* s);
// 获得栈长
int size(LinkStack* s);
// 栈操作
void handle_stack_operations();

#endif
