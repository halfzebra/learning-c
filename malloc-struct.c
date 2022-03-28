#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

typedef enum StateId
{
    EMPTY = 0x0,
    OPEN = 0x1,
} StateId;

typedef struct Entry
{
    StateId state;
    size_t written;
} Entry;

typedef struct StateData
{
    size_t recordsl;
    Entry records[];
} StateData;

int main()
{
    StateData *ptr = malloc(sizeof(StateData));

    printf("sizeof(StateData): %ld\n", sizeof(StateData));

    printf("used %ld\n", ptr->recordsl);
    // printf("0 state %d\n", ptr->records[0].state);
    // printf("0 written %ld\n", ptr->records[0].written);
    return 1;
}