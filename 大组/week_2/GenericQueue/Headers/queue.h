#define _CRT_SECURE_NO_WARNINGS
#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

// 定义队列节点结构
typedef struct queue_node {
    void* data; // 数据
    struct queue_node* next; // 指针
} queue_node;

// 定义队列结构
typedef struct {
    queue_node* front; //对尾
    queue_node* rear; // 队首
    int size; // 队长
    size_t data_size;
} queue;

// 初始化
queue* init(size_t data_size);

// 入队
bool push(queue* q, void* data);

// 出队
bool pop(queue* q, void* data);

// 检测是否为空
bool empty(queue* q);

// 取队首
bool peek(queue* q, void* data);

// 清空队
void clear(queue* q);

// 销毁队（释放）
void destroy(queue* q);

// 获得队长
int size(queue* q);

// 打印队(默认打印整型）
void print(queue* q, void (*print)(void*));
void print_int(void* data);

#endif