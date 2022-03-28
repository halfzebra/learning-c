#include "stdio.h"
#include "stdint.h"
#include "malloc.h"

int main()
{
    // printf("hello\n");

    uint8_t *ptr = malloc(sizeof(uint16_t));

    uint8_t *ptr_next = ptr + sizeof(uint16_t);

    ptr = realloc(ptr, sizeof(uint16_t) * 10);

    *ptr = *ptr + 22;
    *ptr_next = *ptr_next + 33;

    int ec = fwrite(ptr, sizeof(uint8_t), sizeof(uint16_t) * 10, stdout);

    return 0;
}