#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

int main() {
    uint32_t *ptr;

    ptr = (uint32_t *)malloc(sizeof(uint32_t));
    uint8_t *snd_ptr = NULL;

    *ptr = 2;

    printf("1st Value is: %d\n", *ptr);

    ptr = (uint32_t *)realloc(ptr, sizeof(uint32_t) + sizeof(uint8_t));

    snd_ptr = (uint8_t *)ptr + 1;

    *snd_ptr = 255;

    printf("2nd Value is: %d\n", *snd_ptr);

    *ptr = 512;

    printf("1st Value is: %d\n", *ptr);

    return 0;
}