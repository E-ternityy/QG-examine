#include <stdio.h>
#include <stdlib.h>
#include "meun.h"

void clear_screen() {
    system("cls"); 
}

void display_main_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("┌──────────────────────────────────┐\n");
    printf("│" YELLOW BOLD "          计算器系统              " CYAN "│\n");
    printf("├──────────────────────────────────┤\n");
    printf("│                                  │\n");
    printf("│" WHITE "      1. " GREEN "栈实现测试               " CYAN "│\n");
    printf("│" WHITE "      2. " GREEN "计算器实现               " CYAN "│\n");
    printf("│" RED "      0. " RED "退出程序                 " CYAN "│\n");
    printf("│                                  │\n");
    printf("└──────────────────────────────────┘\n" RESET);
    printf(WHITE BOLD "\n请输入选择: " RESET);
}

void display_stack_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("┌──────────────────────────────────┐\n");
    printf("│" YELLOW BOLD "          操作选项                " CYAN "│\n");
    printf("├──────────────────────────────────┤\n");
    printf("│                                  │\n");
    printf("│" WHITE "    1. " GREEN "创建栈                     " CYAN "│\n");
    printf("│" WHITE "    2. " GREEN "入栈                       " CYAN "│\n");
    printf("│" WHITE "    3. " GREEN "出栈                       " CYAN "│\n");
    printf("│" WHITE "    4. " GREEN "栈长                       " CYAN "│\n");
    printf("│" WHITE "    5. " GREEN "打印栈                     " CYAN "│\n");
    printf("│" WHITE "    0. " RED "退出                       " CYAN "│\n");
    printf("│                                  │\n");
    printf("└──────────────────────────────────┘\n" RESET);
    printf(WHITE BOLD "\n请输入选择: " RESET);
}

void display_calculator() {
    clear_screen();
    printf(CYAN BOLD);
    printf("┌──────────────────────────────────┐\n");
    printf("│" YELLOW BOLD "            计算器                " CYAN "│\n");
    printf("├──────────────────────────────────┤\n");
    printf("│" YELLOW BOLD "                                  " CYAN "│\n");
    printf("├──────────────────────────────────┤\n");
    printf("│                                  │\n");
    printf("│       " WHITE "1  2  3  " GREEN "+  -  =" CYAN "           │\n");
    printf("│       " WHITE "4  5  6  " GREEN "×  /" CYAN "              │\n");
    printf("│       " WHITE "7  8  9  " GREEN "(  )" CYAN "              │\n");
    printf("│       " WHITE "0" CYAN "                          │\n");
    printf("│                                  │\n");
    printf("└──────────────────────────────────┘\n" RESET);
    printf(GREEN "\n输入 t 退出\n" RESET);
    printf(WHITE BOLD "\n请输入: " RESET);
}

