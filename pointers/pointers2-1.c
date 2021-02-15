#include "stdio.h"

// gcc ./pointers/pointers2-1.c -o test && ./test

int my_array[] = { 1, 23, 17, 4, -5, 100 };
int *ptr;

int main ()
{
    printf("&my_array[0] %p my_array %p\n", &my_array[0], my_array);
    printf("size of my_array is %ld bytes\n", sizeof(my_array));
    printf("size of my_array[0] is %ld bytes\n", sizeof(my_array[0]));
    printf("length of my_array is %ld\n", sizeof(my_array) / sizeof(my_array[0]));
    
    // int * ptr = &my_array[0];
    int * ptr = my_array;

    for (int i = 0; i <  6; i++) {
        printf("i = %d my_array[i] = %d\n", i, my_array[i]);
        printf("i = %d my_array[i] = %d\n", i, *(ptr + i));
    }
    
    return 0;
}