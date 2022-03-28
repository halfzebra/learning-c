#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"

int main()
{
    int fst = -1;
    uint8_t list[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    for (int i = 0; i < 10; i++)
    {
        printf("fst == NULL %i, i: %i, list[i]: %i\n", fst >= 0, i, list[i]);
        if (fst < 0 && list[i] > 13)
        {
            fst = i;
        }
    }

    if (fst >= 0) {
        printf("here: %i\n", fst);
    } else {
        printf("not found");
    }


    // printf("%i", true);

    return 0;
}