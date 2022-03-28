#include "stdio.h"
#include "stdint.h"
#include "malloc.h"

int main()
{
    // printf("uint16_t is %ld bytes long\n", sizeof(uint16_t));
    uint8_t *ds = malloc(sizeof(uint16_t));

    uint16_t *count_ptr = (uint16_t *)ds;

    // *count_ptr = 0;

    *count_ptr = *count_ptr + 1;

    // printf("count %d\n", *count_ptr);

    // uint8_t * new = (uint8_t *)realloc(count_ptr, sizeof(uint16_t) * 2);

    // // uint8_t *ptr = realloc((void *)count_ptr, sizeof(count) + sizeof(uint64_t));

    for (int i = 0; i < 14; i++)
    {
        *count_ptr = *count_ptr + 1;
    }

    // ds = realloc(ds, sizeof(uint16_t) * 2);
    // ds = realloc(ds, sizeof(uint16_t) * 3);
    ds = realloc(ds, sizeof(uint16_t) * 4);

    // printf("count %d\n", *count_ptr);

    int l = fwrite(ds, sizeof(uint8_t), sizeof(uint16_t) * 4,  stdout);

    // printf("count %d\n", l);

    return 0;
}