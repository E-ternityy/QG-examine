#ifndef CALCULATOR_H
#define CALCULATOR_H

// 中缀转后缀表达式
char* infix_to_postfix(const char* infix);
// 计算后缀表达式
float calculate_postfix(const char* postfix);
// 判断运算符
int is_operator(char c);
// 获取运算符优先级
int get_precedence(char op);
// 计算器操作
void handle_calculator();

#endif
