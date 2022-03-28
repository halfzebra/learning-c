#include "stdio.h"
#include "stdint.h"
#include "string.h"

int main()
{
    uint32_t a = 1;
    uint32_t b = 2;
    uint32_t nums[2] = {};
    uint32_t expect[2] = {1, 2};
    uint64_t *p = (uint64_t *)nums;

    memcpy(nums, &a, 4);
    memcpy(&nums[1], &b, 4);

    printf("uint32_t %ld\n", sizeof(uint32_t));
    printf("got %ld\n", *p);
    printf("expected %ld\n", *((uint64_t *)expect));

    return 0;
}