#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX 100000

typedef struct SeqStack {
    int data[MAX];  // ´æ´¢ÔªËØµÄÊý×é
    int top;  // Õ»¶¥Ö¸Õë
} SeqStack;

// ³õÊ¼»¯Õ»
void initStack(SeqStack* s) {
    s->top = -1;
}

// ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ
bool isEmpty(SeqStack* s) {
    return s->top == -1;
}

// ÅÐ¶ÏÕ»ÊÇ·ñÒÑÂú
bool isFull(SeqStack* s) {
    return s->top == MAX - 1;
}

// ÈëÕ»
bool push(SeqStack* s, int x) {
    if (isFull(s)) {  // Õ»Âú
        return false;
    }
    s->top++;  // Õ»¶¥Ö¸Õë¼Ó1
    s->data[s->top] = x;  // ½«ÐÂÔªËØ·ÅÈëÕ»¶¥
    return true;
}

// ³öÕ»²Ù×÷
int pop(SeqStack* s) {
    if (isEmpty(s)) { // Õ»¿Õ
        printf("´íÎó,Õ»¿Õ");
        exit(1);
    };
    // »ñÈ¡Õ»¶¥ÔªËØ            
    return s->data[s->top--];// Õ»¶¥Ö¸Õë¼õ1
}

// »ñÈ¡Õ»¶¥ÔªËØ£¨²»³öÕ»£©
int top(SeqStack* s) {
    if (isEmpty(s)) {  // Õ»¿Õ
        printf("´íÎó£¬Õ»¿Õ");
        exit(1);
    } 
    // ·µ»ØÕ»¶¥ÔªËØ
    return s->data[s->top];
}

// »ñµÃÕ»³¤
int size(SeqStack* s) {
    return s->data + 1;
}