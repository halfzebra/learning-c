#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    char *str = "hello";
    uint64_t res = 0;
    uint8_t *ptr = (uint8_t *)&res;

    for (int i = 0; i < strlen(str); i++) {
        *(ptr + i) = (uint8_t)str[i];

        printf("char: %c, code: %d\n", str[i], (uint8_t)str[i]);
    }

    printf("res: %ld\n", res);

    for (int i = 0; i < strlen(str); i++) {
        printf("cur ptr: %d, char: %c\n", *(ptr + i), (char)*(ptr + i));
    }
    
    return 0;
}