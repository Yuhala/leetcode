/*
 * Created on Fri Apr 01 2022
 *
 * Copyright (c) 2022 Peterson Yuhala
 *
 */

#include <stdio.h>
#include <math.h>
#include <limits.h>

void swap(int *, int *);
void bubble_sort(int *array, int size);

/**
 *
 * Pyuhala:
 * The principle of bubble sort is to compare each adjacent elements
 * in the list/array and swap them if they are not in the right order.
 * This process is repeated until the whole list is sorted. So the larger values "bubble" to the top.
 * Complexity: O(n^2)
 */

/**
 * @brief
 * Tracks changes during the list iteration: i.e if there was any swap, stop
 * is given a value of 0.
 */
int stop = 1;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *array, int size)
{
    do
    {
        stop = 1;
        for (int i = 0; i < size - 1; i++)
        {
            if (*(array + i) > *(array + i + 1))
            {
                swap(array + i, array + i + 1);
                stop = 0;
            }
        }
    } while (stop != 1);
}