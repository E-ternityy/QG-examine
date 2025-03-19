#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void clear_screen(){
    system("cls");
}

void show_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("┌──────────────────────────────────┐\n");
    printf("│" YELLOW BOLD "          链表操作菜单            " CYAN "│\n");
    printf("├──────────────────────────────────┤\n");
    printf("│                                  │\n");
    printf("│" WHITE "   1. " GREEN "创建单链表                  " CYAN "│\n");
    printf("│" WHITE "   2. " GREEN "创建双向链表                " CYAN "│\n");
    printf("│" WHITE "   3. " GREEN "奇偶位置节点交换（仅单链表）" CYAN "│\n");
    printf("│" WHITE "   4. " GREEN "查找链表中点（仅单链表）    " CYAN "│\n");
    printf("│" WHITE "   5. " GREEN "检测链表是否有环(请看源码） " CYAN "│\n");
    printf("│" WHITE "   6. " GREEN "反转链表（仅单链表）        " CYAN "│\n");
    printf("│" WHITE "   7. " GREEN "打印当前链表                " CYAN "│\n");
    printf("│" WHITE "   0. " RED "退出程序                    " CYAN "│\n");
    printf("│                                  │\n");
    printf("└──────────────────────────────────┘\n" RESET);
    printf("\n"GREEN"温馨提示：若要重置链表，退出程序再打开(没做）（╮（╯＿╰）╭）\n" );
    printf("\n"GREEN"          没做让链表成环，所以选5直接是无环(代码应该没问题)\n");
    printf("\n"YELLOW"师兄还要什么功能我可以再加(^▽^ )\n");
    printf(WHITE BOLD "\n请输入选择: " RESET);
}