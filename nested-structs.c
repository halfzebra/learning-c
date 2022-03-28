#include "stdio.h"
#include "stdint.h"
#include "string.h"

struct User
{
    char name[10];
    uint8_t age;
};

struct GithubUser
{
    struct User user;
    char handle[10];
};

void print_user(struct User *u)
{
    printf("%s is %d years old\n", u->name, u->age);
};

int main()
{
    struct User me;
    struct GithubUser gh_me;
    strncpy(me.name, "Eduard", 7);
    me.age = 30;

    memcpy(&gh_me, &me, sizeof(me.name) + sizeof(me.age));

    print_user((struct User *)&gh_me);

    printf("Memory is the same: %s\n", memcmp(&gh_me, &me, sizeof(me.name) + sizeof(me.age)) == 0 ? "true" : "false");
    return 0;
};