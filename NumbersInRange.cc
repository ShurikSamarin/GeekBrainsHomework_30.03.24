#include <stdio.h>

void print_sequence(int A, int B) {
    if (A == B) {
        printf("%d ", A);
    } else if (A < B) {
        printf("%d ", A);
        print_sequence(A + 1, B);
    } else {
        printf("%d ", A);
        print_sequence(A - 1, B);
    }
}

int main() {
    int num1, num2;
    printf("Введите два целых числа через пробел: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Последовательность чисел: ");
    print_sequence(num1, num2);
    
    return 0;
}
