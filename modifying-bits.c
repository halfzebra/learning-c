#include "stdio.h"
#include "stdint.h"

void print_bits(uint8_t num)
{
    for (int i = 0; i < 8; i++) {
        printf("%-4d", !!(num & 1 << i));
    }
    printf("\n");
}

int main()
{
    uint8_t num = 0;

    print_bits(num);

    num = num | 1 << 4;

    print_bits(num);

    num = num | 1 << 7;

    print_bits(num);

    return 0;
}

