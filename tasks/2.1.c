#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("char: %d to %d\nshort: %d to %d\nint: %d to %d\nlong: %d to %d\n",
    CHAR_MIN, CHAR_MAX, SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX);
}