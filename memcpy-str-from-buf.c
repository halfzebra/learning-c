#include "stdio.h"
#include "stdint.h"
#include "string.h"

int main() {
    uint64_t buf = 0x0;
    char *msg = "pepepopo";
    char str_buf[9];

    printf("buf: %lx\n", buf);

    memcpy((void *)&buf, msg, strlen(msg));

    printf("msg: %s\n", msg);

    printf("buf: %lx\n", buf);

    printf("str_buf: %s\n", str_buf);

    memcpy((void *)str_buf, &buf, strlen(msg));

    str_buf[8] = '\0';

    printf("str_buf: %s\n", str_buf);

    printf("char: %x\n", msg[8]);
}