#include <stdio.h>

int main() {
    int num;
    
    printf("Введите последовательность целых чисел (число 0 завершает ввод): ");
    
    while (1) {
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num % 2 != 0) {
            printf("%d ", num);
        }
    }
    
    return 0;
}
