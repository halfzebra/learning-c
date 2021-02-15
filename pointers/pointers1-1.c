#include "stdio.h"

// gcc ./pointers/pointers1-1.c -o test && ./test

int k, j, n;
int *ptr;

int main() {
    j = 1;
    k = 2;
    n = 3;
    ptr = &k;
    printf("j has the value %d and is stored  at %p\n", j, &j);
    printf("k has the value %d and is stored at %p\n", k, &k);
    printf("n has the value %d and is stored at %p\n", n, &n);
    printf("ptr has the value %p and is stored at %p\n", ptr, &ptr);
    printf("the value of integer is %d\n", *ptr);
    return 0;
}