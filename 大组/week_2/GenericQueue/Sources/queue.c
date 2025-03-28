#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

// ��ʼ��
queue* init(size_t data_size) {
    queue* q = (queue*)malloc(sizeof(queue));
    if (q == NULL) return NULL;
    
    q->front = q->rear = NULL;
    q->size = 0;
    q->data_size = data_size;
    return q;
}

// ���
bool push(queue* q, void* data) {
    if (q == NULL || data == NULL) return false;
    
    queue_node* new_node = (queue_node*)malloc(sizeof(queue_node));
    if (new_node == NULL) return false;
    
    new_node->data = malloc(q->data_size);
    if (new_node->data == NULL) {
        free(new_node);
        return false;
    }
    
    memcpy(new_node->data, data, q->data_size);
    new_node->next = NULL;
    
    if (q->rear == NULL) {
        q->front = q->rear = new_node;
    } else {
        q->rear->next = new_node;
        q->rear = new_node;
    }
    
    q->size++;
    return true;
}

// ����
bool pop(queue* q, void* data) {
    if (q == NULL || q->front == NULL || data == NULL) return false;
    
    queue_node* temp = q->front;
    memcpy(data, temp->data, q->data_size);
    
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    
    free(temp->data);
    free(temp);
    q->size--;
    return true;
}

// ����
bool empty(queue* q) {
    return (q == NULL || q->front == NULL);
}

// �õ�����
bool peek(queue* q, void* data) {
    if (empty(q) || data == NULL) return false;
    memcpy(data, q->front->data, q->data_size);
    return true;
}

// ��ն�
void clear(queue* q) {
    if (q == NULL) return;
    
    while (q->front != NULL) {
        queue_node* temp = q->front;
        q->front = q->front->next;
        free(temp->data);
        free(temp);
    }
    
    q->front = q->rear = NULL;
    q->size = 0;
}

// ���ٶӣ��ͷţ�
void destroy(queue* q) {
    if (q == NULL) return;
    clear(q);
    free(q);
}

// ��öӳ�
int size(queue* q) {
    return (q == NULL) ? 0 : q->size;
}

// ��ӡ����
void print(queue* q, void (*print)(void*)) {
    if (q == NULL || print == NULL) return;
    
    queue_node* current = q->front;
    while (current != NULL) {
        print(current->data);
        current = current->next;
    }
    printf("\n");
}

// ��ӡ���Ͷ���
void print_int(void* data) {
    printf("%d ", *(int*)data);
}