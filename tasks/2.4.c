#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int k = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        int found = 0;

        for (int j = 0; s2[j] != '\0'; ++j) {
            if (s1[i] == s2[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            s1[k++] = s1[i];
        }
    }

    s1[k] = '\0';
}

int main(void)
{
    char s1[] = "abcdefg";
    char s2[] = "adg";

    squeeze(s1, s2);
    printf("%s\n", s1);

    return 0;
}