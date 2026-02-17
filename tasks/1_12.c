/* Программа, печатающая содержимое своего ввода,
помещая по одному слову на каждой строке */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    bool enter_made = false;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (!enter_made) {
                putchar('\n');
                enter_made = true;
            }
        } else {
            putchar(c);
            enter_made = false;
        }
    }
    return 0;
}