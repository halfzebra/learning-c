#include "stdio.h"
#include "stdlib.h"

int main() {
    char *buf;
    puts("hello");

    printf("string \"a\" size %li\n", sizeof("a"));
    printf("char \"a\" size %li\n", sizeof('a'));

    // Allocate a buffer for 16 characters
    buf = (char *) malloc(16);

    *(buf) = 'H'; 
    *(buf + 1) = 'a'; 
    *(buf + 2) = '\0';

    for (int i = 0; i < 16; i++) {
        printf("address %p value \"%c\"\n", buf + i, *(buf + i));
    }

    puts(buf);

    return 0;
}