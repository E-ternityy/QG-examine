#include <stdio.h>
#include <stdlib.h>
#include "meun.h"

// ����
void clear_screen() {
    system("cls");
}

// �˵�
void display_queue_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("������������������������������������������������������������������������\n");
    printf("��          ���Ͷ��в���            ��\n");
    printf("������������������������������������������������������������������������\n");
    printf("��                                  ��\n");
    printf("��" WHITE "    1. " GREEN "Ԫ�����                   " CYAN "��\n");
    printf("��" WHITE "    2. " GREEN "Ԫ�س���                   " CYAN "��\n");
    printf("��" WHITE "    3. " GREEN "�ж϶��Ƿ�Ϊ��             " CYAN "��\n");
    printf("��" WHITE "    4. " GREEN "ȡ����Ԫ��                 " CYAN "��\n");
    printf("��" WHITE "    5. " GREEN "��ն�                     " CYAN "��\n");
    printf("��" WHITE "    6. " GREEN "���ٶ�                     " CYAN "��\n");
    printf("��" WHITE "    7. " GREEN "���ӵĳ���               " CYAN "��\n");
    printf("��" WHITE "    8. " GREEN "��ӡ��                     " CYAN "��\n");
    printf("��" WHITE "    0. " RED "�˳�����                   " CYAN "��\n");
    printf("��                                  ��\n");
    printf("������������������������������������������������������������������������\n" RESET);
    printf(WHITE BOLD "Ĭ��Ϊ���Ͷ��У�������Դ�����޸�Ϊ��������(�õ�void*),���ֱ�����������ͻ����δ֪����(�i�n�i)\n" RESET);
    printf(WHITE BOLD "��ѡ����Ҫ�Ĺ���: " RESET);
}
