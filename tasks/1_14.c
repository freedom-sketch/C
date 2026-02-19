/* Программа печатает гистограммы частот встречаемости
вводимых символов (для ASCII) */

#include <stdio.h>
#include <stdbool.h>

#define ASCII_SIZE 128

int main(void)
{
    /* Инициализируем нулями массив подсчета повторений символов */
    int ascii_count [ASCII_SIZE] = {0};

    int c;
    while ((c = getchar()) != EOF) {
        /* НЕ считаем служебные символы */
        if (c >= 127 || c <= 32) continue;
        
        ++ascii_count[c];
    }

    /* Пробегаемся по ASCII (от 0 до 127) */
    for (int i = 0; i < ASCII_SIZE; ++i) {
        /* Отображаем только встреченные символы */
        if (ascii_count[i] > 0) {
            printf("%c ", i);
        } else continue;

        int j;
        for (j = 0; j < ascii_count[i]; ++j) {
            putchar('=');
        }
        printf(" [%d]", j);
        putchar('\n');
    }

    return 0;
}