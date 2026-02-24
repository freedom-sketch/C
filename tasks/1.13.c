/* Программа рисует гистограмму для вводимых слов */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    bool made_enter = false;

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (!made_enter) {
                putchar('\n');
                made_enter = true;
            }
        } else {
            putchar('=');
            made_enter = false;
        }
    }

    return 0;
}