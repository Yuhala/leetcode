
/*
 * Created on Tue Nov 02 2021
 *
 * Copyright (c) 2021 Peterson Yuhala, IIUN
 */

#include <stdio.h>
#include <math.h>
#include <limits.h>
//forward declarations
int reverse_int(int val);
int get_num_digits(int val);

//get number of digits in a positive integer
int get_num_digits(int val)
{
    int ndigits = 1;

    double quotient = (double)val / 10;

    while (quotient >= 1)
    {
        quotient = quotient / 10;
        ndigits++;
    }
    return ndigits;
}

int reverse_int(int val)
{
   
    printf("min int is: %d, max int is: %d\n", INT_MIN, INT_MAX);
    int positive_val = val;
    int reversed_val = 0;
    bool is_neg = false;
    if (positive_val < 0)
    {
        is_neg = true;
        positive_val *= -1;
    }

    int ndigits = get_num_digits(positive_val);

    if (ndigits == 1)
    {
        return (is_neg ? positive_val * -1 : positive_val);
    }

    int digit_array[ndigits];
    //gets digits in reverse
    for (int i = ndigits - 1; i >= 0; i--)
    {
        digit_array[i] = positive_val / pow(10, i); // must be integer division
        positive_val -= digit_array[i] * pow(10, i);
    }

    //get reversed number
    for (int i = 0; i < ndigits; i++)
    {
        reversed_val += digit_array[i] * pow(10, ndigits - 1 - i);
    }

    if (reversed_val < INT_MIN || reversed_val > INT_MAX)
    {
        return 0;
    }
    else
    {
        return (is_neg ? reversed_val * -1 : reversed_val);
    }

    //printf("Reversed number is: %d \n ", ndigits);
    //return ndigits;
}
