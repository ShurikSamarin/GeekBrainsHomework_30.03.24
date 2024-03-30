#include <stdio.h>

void print_num(int num) {
    if (num < 10) {
        printf("%d ", num);
    } else {
        print_num(num / 10);
        printf("%d ", num % 10);
    }
}

int main() {
    int N;
    printf("Введите натуральное число N: ");
    scanf("%d", &N);
    
    printf("Цифры числа %d: ", N);
    print_num(N);
    
    return 0;
}
