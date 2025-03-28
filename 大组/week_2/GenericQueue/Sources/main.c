#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "meun.h"
#include "queue.h"

int main() {
    queue* q = init(sizeof(int));
    int choice, value;
    
    while (1) {
        display_queue_menu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: // Ԫ�����
                printf("������Ҫ��ӵ�����: ");
                scanf("%d", &value);
                if (push(q, &value)) {
                    printf("��ӳɹ�!(^u^)\n");
                } else {
                    printf("���ʧ��!�r(�s_�t)�q\n");
                }
                break;
                
            case 2: // Ԫ�س���
                if (pop(q, &value)) {
                    printf("����Ԫ��: %d\n", value);
                } else {
                    printf("����Ϊ��!�r(�s_�t)�q\n");
                }
                break;
                
            case 3: // �ж϶��Ƿ�Ϊ��
                printf("����%sΪ��\n", empty(q) ? "��" : "����");
                break;
                
            case 4: // ȡ����Ԫ��
                if (peek(q, &value)) {
                    printf("����Ԫ��: %d\n", value);
                } else {
                    printf("����Ϊ��!�r(�s_�t)�q\n");
                }
                break;
                
            case 5: // ��ն�
                clear(q);
                printf("���������!(^u^)\n");
                break;
                
            case 6: // ���ٶ�
                destroy(q);
                q = init(sizeof(int));
                printf("���������ٲ����³�ʼ��!(^u^)\n");
                break;
                
            case 7: // �ӳ�
                printf("���г���: %d\n", size(q));
                break;
                
            case 8: // ��ӡ��
                if (empty(q)) {
                    printf("����Ϊ��!�r(�s_�t)�q\n");
                } else {
                    printf("��������: ");
                    print(q, print_int);
                }
                break;
                
            case 0: // �˳�
                destroy(q);
                return 0;
                
            default:
                printf("��Чѡ��r(�s_�t)�q\n");
        }
        
        printf("\n���س�������...");
        getchar();
        getchar();
    }
    
    return 0;
}
