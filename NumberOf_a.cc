#include <stdio.h>

int acounter() {
    char c;
    scanf("%c", &c);

    if (c == '.') {
        return 0;
    }

    if (c == 'a') {
        return 1 + acounter();
    } else {
        return acounter();
    }
}

int main() {
    printf("Введите строку из английских символов, пробелов и знаков препинания (символ '.' завершает ввод): ");
    
    int count = acounter();
    
    printf("Количество символов 'a' в строке: %d\n", count);
    
    return 0;
}
