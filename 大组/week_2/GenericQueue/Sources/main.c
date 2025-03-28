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
            case 1: // 元素入队
                printf("请输入要入队的整数: ");
                scanf("%d", &value);
                if (push(q, &value)) {
                    printf("入队成功!(^u^)\n");
                } else {
                    printf("入队失败!╮(╯_╰)╭\n");
                }
                break;
                
            case 2: // 元素出队
                if (pop(q, &value)) {
                    printf("出队元素: %d\n", value);
                } else {
                    printf("队列为空!╮(╯_╰)╭\n");
                }
                break;
                
            case 3: // 判断队是否为空
                printf("队列%s为空\n", empty(q) ? "是" : "不是");
                break;
                
            case 4: // 取队首元素
                if (peek(q, &value)) {
                    printf("队首元素: %d\n", value);
                } else {
                    printf("队列为空!╮(╯_╰)╭\n");
                }
                break;
                
            case 5: // 清空队
                clear(q);
                printf("队列已清空!(^u^)\n");
                break;
                
            case 6: // 销毁队
                destroy(q);
                q = init(sizeof(int));
                printf("队列已销毁并重新初始化!(^u^)\n");
                break;
                
            case 7: // 队长
                printf("队列长度: %d\n", size(q));
                break;
                
            case 8: // 打印队
                if (empty(q)) {
                    printf("队列为空!╮(╯_╰)╭\n");
                } else {
                    printf("队列内容: ");
                    print(q, print_int);
                }
                break;
                
            case 0: // 退出
                destroy(q);
                return 0;
                
            default:
                printf("无效选择╮(╯_╰)╭\n");
        }
        
        printf("\n按回车键继续...");
        getchar();
        getchar();
    }
    
    return 0;
}
