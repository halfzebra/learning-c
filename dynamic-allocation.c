#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

// Compile with: gcc dynamic-allocation.c -lm --output test && ./test

size_t closest_divisible_by(int num, int divider)
{
    return divider * ceil(num / (double_t)divider);
}

int main()
{
    uint16_t key_len = 8;
    size_t val_size = closest_divisible_by(sizeof(uint16_t) + key_len, 4);
    size_t len = 0;
    uint8_t *ptr = NULL;
    ptr = (uint8_t *)malloc(len * val_size);
    uint8_t *key_ptr_in_buff = NULL;
    uint8_t *key_ptr = NULL;
    char key_str[8] = "hello";
    uint16_t *key_len_ptr = NULL;
    char key_read[16];

    for (int i = 0; i < (val_size * 5); i = i + val_size)
    {
        ptr = (uint8_t *)realloc(ptr, len * val_size * i + 1);

        memcpy(ptr, &key_len, sizeof(uint16_t));
        key_ptr_in_buff = ptr + sizeof(uint16_t);

        memcpy(key_ptr_in_buff, key_str, key_len);

        len++;
    }

    printf("Single value size: %ld bytes\n", val_size);

    printf("Total amount of values: %ld bytes\n", len);
    printf("Total amount of bytes: %ld bytes\n", len * val_size);
    printf("KEY LEN %d \n", *(uint16_t *)ptr);

    for (int i = 0; i < val_size * len; i = i + val_size)
    {
        memcpy(key_read, ptr + 2, key_len);
        printf("%s \n", key_read);
    }
}