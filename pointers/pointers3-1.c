#include "stdio.h"

// gcc ./pointers/pointers3-1.c -o test && ./test

char strA[80] = "A string to be used for demonstration purposes";
char strB[80];

int main(void)
{
    char *pA;
    char *pB;
    puts(strA);
    puts("\n");
    printf("%s\n", strA);
    pA = strA;
    pB = strB;
    putchar('\n');

    printf("%c", *pA);

    return 0;
}