#include "stdio.h"
#include "string.h"

struct Users {
    int count;
    char list[][10];
};

int main() {
    struct Users *users[10] = {0};
    return 0;
}