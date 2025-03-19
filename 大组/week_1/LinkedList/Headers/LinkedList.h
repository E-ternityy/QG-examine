#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// 单链表节点
typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

// 双向链表节点
typedef struct DListNode {
    int data;
    struct DListNode* prev;
    struct DListNode* next;
} DListNode;


// 单链表操作
ListNode* create_node(int data); // 创建
void insert1(ListNode** head, int data); // 尾插插入
void print_list(ListNode* head); // 打印
ListNode* odd_even_swap(ListNode* head); // 奇偶转换
ListNode* find_middle(ListNode* head); // 找中点
int is_cycle(ListNode* head); // 判断环
ListNode* reverse_list1(ListNode* head); // 非递归反转
ListNode* reverse_list2(ListNode* head); // 递归反转

// 双链表操作
DListNode* create_dlistnode(int data); // 创建（双）
void insert2(DListNode** head, int data); // 尾插插入（双）
void print_dlist(DListNode* head); // 打印
#endif