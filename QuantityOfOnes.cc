#include <stdio.h>

int count_ones_in_binary(int N) {
    int count = 0;
    
    while (N > 0) {
        if (N % 2 == 1) {
            count++;
        }
        N = N / 2;
    }
    
    return count;
}

int main() {
    int num;
    printf("Введите натуральное число: ");
    scanf("%d", &num);
    
    int ones_count = count_ones_in_binary(num);
    
    printf("Количество единиц в двоичной записи числа: %d\n", ones_count);
    
    return 0;
}
