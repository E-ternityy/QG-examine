#ifndef MENU_H
#define MENU_H

// 颜色
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// 计算器界面
void display_calculator();
// 栈操作界面
void display_stack_menu();
// 主界面
void display_main_menu();

#endif

