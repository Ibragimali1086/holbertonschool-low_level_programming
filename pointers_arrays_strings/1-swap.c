/**
 * File: 1-swap.c
 * Author: Your Name
 * Description: Function that swaps the values of two integers.
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Description: This function swaps the values stored at the
 * memory locations pointed to by @a and @b.
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
