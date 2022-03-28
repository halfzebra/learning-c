#include "stdio.h"
#include "string.h"

struct User
{
    char name[16];
};

int main()
{
    struct User me;

    printf(" 0 == '\\0': %d\n", 0 == '\0');

    printf("name: %s \n", me.name);
    printf("first char: %c\n", me.name[0]);
    printf("first char is null char: %s\n", me.name[0] == '\0' ? "true" : "false");

    strcpy(me.name, "Eduard");

    printf("name: %s \n", me.name);
    printf("first char: %c\n", me.name[0]);
    printf("first char is null char: %s\n", me.name[0] == '\0' ? "true" : "false");

    return 0;
}