#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"
#include "chainStack.h"
#include "meun.h"

int main() {
	int choice;
	
    do {
        display_main_menu();
        scanf("%d", &choice);

        switch (choice) {
        case 0:
            break;
        case 1:
            handle_stack_operations();
            break;
        case 2:
            handle_calculator();
            break;
        default:
            printf("��������Ч���֨r(�s_�t)�q\n");
            printf("\n���س�������...");
            getchar();  
            getchar();  
        }
    } while (choice != 0);
	
	return 0;
}