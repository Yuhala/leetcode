/*
 * Created on Tue Nov 02 2021
 *
 * Copyright (c) 2021 Peterson Yuhala, IIUN
 */

#include <stdlib.h>
#include <stdio.h>

#include "reverse_int.hpp"
#include "bubble_sort.hpp"

// forward declarations
void print_array(int *array, int size);

// globals
#define BUF_SIZE 7
int array[BUF_SIZE] = {1, 2, 3, 4, 7, 5, 6};

int main()
{

    /* printf("x = 123 output: %d\n", reverse_int(123));
    printf("x = -123 output: %d\n", reverse_int(-123));
    printf("x = 120 output: %d\n", reverse_int(120));
    printf("x = 0 output: %d\n", reverse_int(0));
    printf("x = 1534236469 output: %d\n", reverse_int(1534236469)); */

    print_array(array, BUF_SIZE);
    bubble_sort(array, BUF_SIZE);
    print_array(array, BUF_SIZE);
    return 0;
}

void print_array(int *array, int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
}