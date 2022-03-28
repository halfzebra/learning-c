#include "stdio.h"
#include "stdint.h"

// gcc arr-to-uint32.c --output test && ./test

int main()
{
    uint8_t arr[8] = {3, 0, 0, 0, 3, 0, 0, 0};

    printf("%d %d\n", *(uint32_t *)arr, *(((uint32_t *)arr) + 1));
}