#include <stdio.h>
#include <stdlib.h>
#include "meun.h"

// 清屏
void clear_screen() {
    system("cls");
}

// 菜单
void display_queue_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("┌──────────────────────────────────┐\n");
    printf("│          泛型队列操作            │\n");
    printf("├──────────────────────────────────┤\n");
    printf("│                                  │\n");
    printf("│" WHITE "    1. " GREEN "元素入队                   " CYAN "│\n");
    printf("│" WHITE "    2. " GREEN "元素出队                   " CYAN "│\n");
    printf("│" WHITE "    3. " GREEN "判断队是否为空             " CYAN "│\n");
    printf("│" WHITE "    4. " GREEN "取队首元素                 " CYAN "│\n");
    printf("│" WHITE "    5. " GREEN "清空队                     " CYAN "│\n");
    printf("│" WHITE "    6. " GREEN "销毁队                     " CYAN "│\n");
    printf("│" WHITE "    7. " GREEN "检测队的长度               " CYAN "│\n");
    printf("│" WHITE "    8. " GREEN "打印队                     " CYAN "│\n");
    printf("│" WHITE "    0. " RED "退出程序                   " CYAN "│\n");
    printf("│                                  │\n");
    printf("└──────────────────────────────────┘\n" RESET);
    printf(WHITE BOLD "默认为整型队列，可以在源码里修改为其它类型(用的void*),如果直接用其他类型会出现未知错误(╥﹏╥)\n" RESET);
    printf(WHITE BOLD "请选择需要的功能: " RESET);
}
