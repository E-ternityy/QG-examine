#include <stdio.h>
#include <stdlib.h>
#include "meun.h"

void clear_screen() {
    system("cls"); 
}

void display_main_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("������������������������������������������������������������������������\n");
    printf("��" YELLOW BOLD "          ������ϵͳ              " CYAN "��\n");
    printf("������������������������������������������������������������������������\n");
    printf("��                                  ��\n");
    printf("��" WHITE "      1. " GREEN "ջʵ�ֲ���               " CYAN "��\n");
    printf("��" WHITE "      2. " GREEN "������ʵ��               " CYAN "��\n");
    printf("��" RED "      0. " RED "�˳�����                 " CYAN "��\n");
    printf("��                                  ��\n");
    printf("������������������������������������������������������������������������\n" RESET);
    printf(WHITE BOLD "\n������ѡ��: " RESET);
}

void display_stack_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("������������������������������������������������������������������������\n");
    printf("��" YELLOW BOLD "          ����ѡ��                " CYAN "��\n");
    printf("������������������������������������������������������������������������\n");
    printf("��                                  ��\n");
    printf("��" WHITE "    1. " GREEN "����ջ                     " CYAN "��\n");
    printf("��" WHITE "    2. " GREEN "��ջ                       " CYAN "��\n");
    printf("��" WHITE "    3. " GREEN "��ջ                       " CYAN "��\n");
    printf("��" WHITE "    4. " GREEN "ջ��                       " CYAN "��\n");
    printf("��" WHITE "    5. " GREEN "��ӡջ                     " CYAN "��\n");
    printf("��" WHITE "    0. " RED "�˳�                       " CYAN "��\n");
    printf("��                                  ��\n");
    printf("������������������������������������������������������������������������\n" RESET);
    printf(WHITE BOLD "\n������ѡ��: " RESET);
}

void display_calculator() {
    clear_screen();
    printf(CYAN BOLD);
    printf("������������������������������������������������������������������������\n");
    printf("��" YELLOW BOLD "            ������                " CYAN "��\n");
    printf("������������������������������������������������������������������������\n");
    printf("��" YELLOW BOLD "                                  " CYAN "��\n");
    printf("������������������������������������������������������������������������\n");
    printf("��                                  ��\n");
    printf("��       " WHITE "1  2  3  " GREEN "+  -  =" CYAN "           ��\n");
    printf("��       " WHITE "4  5  6  " GREEN "��  /" CYAN "              ��\n");
    printf("��       " WHITE "7  8  9  " GREEN "(  )" CYAN "              ��\n");
    printf("��       " WHITE "0" CYAN "                          ��\n");
    printf("��                                  ��\n");
    printf("������������������������������������������������������������������������\n" RESET);
    printf(GREEN "\n���� t �˳�\n" RESET);
    printf(WHITE BOLD "\n������: " RESET);
}

