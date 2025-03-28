#ifndef CALCULATOR_H
#define CALCULATOR_H

// ��׺ת��׺���ʽ
char* infix_to_postfix(const char* infix);
// �����׺���ʽ
float calculate_postfix(const char* postfix);
// �ж������
int is_operator(char c);
// ��ȡ��������ȼ�
int get_precedence(char op);
// ����������
void handle_calculator();

#endif
