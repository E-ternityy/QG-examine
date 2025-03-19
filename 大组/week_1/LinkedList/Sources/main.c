#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "LinkedList.h"
#include "menu.h"

int main() {
    ListNode* shead = NULL;    // 单向链表头指针
    DListNode* dhead = NULL;   // 双向链表头指针
    int choice;

    while (1) {
        show_menu();
        scanf("%d", &choice);

        switch (choice){
        case 1:{ 
            // 创建单链表
            if (shead != NULL){
                printf("\n已有单链表！╮(╯_╰)╭\n");
                break;
            }
            printf("\n链表元素个数: ");
            int n, val;
            scanf("%d", &n);
            printf("依次输入%d个整数:\n", n);
            for (int i = 0; i < n; i++) {
                scanf("%d", &val);
                insert1(&shead, val);
            }
            printf("\n单链表创建成功！ヽ( ^ω^ ゞ )\n");
            break;
        }
        case 2:{
            // 创建双链表
            if (dhead != NULL){
                printf("\n已有双向链表！╮(╯_╰)╭\n");
                break;
            }
            printf("\n链表元素个数: ");
            int n, val;
            scanf("%d", &n);
            printf("依次输入%d个整数:\n", n);
            for (int i = 0; i < n; i++) {
                scanf("%d", &val);
                insert2(&dhead, val);
            }
            printf("\n双向链表创建成功！ヽ( ^ω^ ゞ )\n");
            break;
        }
        case 3:
            // 奇偶转换
            shead = odd_even_swap(shead);
            printf("\n单链表已奇偶交换！ヽ( ^ω^ ゞ )\n");
            break;
        case 4:
            // 中点查询
            ListNode* middle = find_middle(shead);
            if (middle){
                printf("\n单链表中点值为: %d\n", middle->data);
            }else{
            }
            break;
        case 5:
            // 判断有无环
            if (shead != NULL){
                printf("\n单链表%s环\n", is_cycle(shead) ? "有" : "没有");
            }else{
                printf("\n无单链表！╮(╯_╰)╭\n");
            }
            break;
        case 6:
            // 反转链表
            if (shead != NULL){
                int x;
                printf("\n数字1调用非递归反转，数字2调用递归反转\n");
                printf("请输入数字(输入1/2以外数字返回):\n");
                scanf("%d", &x);
                if (x == 1){
                    shead = reverse_list1(shead);
                    printf("\n反转成功ヽ( ^ω^ ゞ )");
                }
                else if(x == 2){
                    shead = reverse_list2(shead);
                    printf("\n反转成功ヽ( ^ω^ ゞ )");
                }
            }else{
                printf("\n无单链表！╮(╯_╰)╭\n");
            }
            break;
        case 7:
            // 显示链表
            if (shead == NULL && dhead == NULL){
                printf("无链表╮(╯_╰)╭");
            }
            if (shead != NULL){
                printf("\n当前单向链表: ");
                print_list(shead);
            }
            if (dhead != NULL){
                printf("\n当前双向链表: ");
                print_dlist(dhead);
            }
            break;
        case 0:
            return 0;
        default:
            printf("\n无效，请重试！╮(╯_╰)╭\n");
        }

        printf("\n按回车键继续...");
        getchar(); // 缓冲区消除
        getchar();
    }

    return 0;
}