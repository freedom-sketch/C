#include <stdio.h>

/* Подсчет цифр, символов-разделителей и прочих символов */
int main(void)
{
    int c, nwhite = 0, nother = 0;
    int ndigit[10] = {0};

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("numbers =");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", separator characters = %d, other = %d\n", nwhite, nother);
}