#include "stdio.h"
#include "stdint.h"
#include "string.h"

int main() {
    char *str = "hello";
    uint64_t num = 0;
    uint8_t *ptr = &num;

    // memcpy((void *)&num, str, sizeof(uint64_t));
    memcpy((void *)&num, str, strlen(str));
    printf("str: %s\n", str);
    printf("num: %lx\n", num);

    for (int i = 0; i < 8; i++) {
        printf("%d, %c \n", *(ptr + i), (char *)*(ptr + i));
    }
    return 0;
}