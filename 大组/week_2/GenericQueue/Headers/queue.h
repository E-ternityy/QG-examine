#define _CRT_SECURE_NO_WARNINGS
#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

// ������нڵ�ṹ
typedef struct queue_node {
    void* data; // ����
    struct queue_node* next; // ָ��
} queue_node;

// ������нṹ
typedef struct {
    queue_node* front; //��β
    queue_node* rear; // ����
    int size; // �ӳ�
    size_t data_size;
} queue;

// ��ʼ��
queue* init(size_t data_size);

// ���
bool push(queue* q, void* data);

// ����
bool pop(queue* q, void* data);

// ����Ƿ�Ϊ��
bool empty(queue* q);

// ȡ����
bool peek(queue* q, void* data);

// ��ն�
void clear(queue* q);

// ���ٶӣ��ͷţ�
void destroy(queue* q);

// ��öӳ�
int size(queue* q);

// ��ӡ��(Ĭ�ϴ�ӡ���ͣ�
void print(queue* q, void (*print)(void*));
void print_int(void* data);

#endif