#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// 单链表
ListNode* create_node(int data){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// 单链表尾插法
void insert1(ListNode** head, int data){
    ListNode* newNode = create_node(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    ListNode* current = *head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}

// 打印单链表
void print_list(ListNode* head){
    ListNode* current = head;
    // 遍历链表打印
    while (current != NULL){
        printf("%d", current->data);
        if (current->next != NULL){
            printf(" -> ");
        }
        current = current->next;
    }
    printf("\n");
}

// 奇偶转换（两两交换）
ListNode* odd_even_swap(ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* newHead = head->next; // 新头节点为第二个节点

    ListNode* prev = head; // 第一个节点
    ListNode* curr = head->next; // 第二个节点

    while (curr != NULL) {
        // 下一对的第一个节点
        ListNode* next = curr->next; 

        curr->next = prev; // 连接反转
        // 下一对是否有两个节点
        if (next != NULL && next->next != NULL) {
            // 更新指针
            prev->next = next->next;
            prev = next;
            curr = next->next;
        }
        else {
            // 处理尾指针
            prev->next = next;
            break;
        }
    }

    return newHead;
}

// 快慢指针法（若节点数为偶数，返回中间两个的第一个节点值）
ListNode* find_middle(ListNode* head){
    if (head == NULL) return NULL;

    ListNode* slow = head;
    ListNode* fast = head;
    // 慢指针走一步，快指针走两部（遍历完慢指针指向目标节点）
    while (fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int is_cycle(ListNode* head){
    if (head == NULL) return 0;

    ListNode* slow = head;
    ListNode* fast = head;
    // 快慢指针判断（若成环，快慢指针一定会相遇）
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }

    return 0;
}
// 非递归反转
ListNode* reverse_list1(ListNode* head){
    ListNode* prev = NULL;
    ListNode* current = head;
    ListNode* next = NULL;

    while (current != NULL){
        next = current->next; // next指向下一个节点
        current->next = prev; // 当前下一个节点指向prev
        prev = current; // prev指向当前节点
        current = next; // 更新当前节点
    }

    return prev;
}

// 递归反转
ListNode* reverse_list2(ListNode* head){
    if (head == NULL || head->next == NULL){
        return head;
    }
    ListNode* rest = reverse_list2(head->next); // 递归反转子链表
    head->next->next = head; // 反转当前节点与子链表链接
    head->next = NULL; // 断开链接

    return rest;
}
// 双向链表创建
DListNode* create_dlistnode(int data){
    DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// 双向链表尾插法
void insert2(DListNode** head, int data){
    DListNode* newNode = create_dlistnode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    DListNode* current = *head;
    while (current->next != NULL){
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}
// 双向链表打印
void print_dlist(DListNode* head){
    DListNode* current = head;
    // 遍历链表打印
    while (current != NULL){
        printf("%d", current->data);
        if (current->next != NULL){
            printf(" <-> ");
        }
        current = current->next;
    }
    printf("\n");
}