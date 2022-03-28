#include "stdio.h"

// gcc ./pointers/pointers3-1.c -o test && ./test

char strA[80] = "A string to be used for demonstration purposes";
char strB[80];

char *my_strcopy(char *destination, const char *source) {
    char *p = destination;
    while (*source != '\0') {
        *p++ = *source++;
    }
    *p = '\0';
    return destination;
}

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
    printf("Char at pointer pA: %c\n", *pA);

    // while (*pA != '\0') {
    //     *pB++ = *pA++;
    // }
 
    // *pB = '\0';

    my_strcopy(pB, pA);

    puts("String strB:");
    puts(strB);

    return 0;
}