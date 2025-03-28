#define _CRT_SECURE_NO_WARNINGS
#ifndef MEUN_H
#define MEUN_H
// 颜色定义
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// 清屏
void clear_screen();

// 菜单
void display_queue_menu();

#endif