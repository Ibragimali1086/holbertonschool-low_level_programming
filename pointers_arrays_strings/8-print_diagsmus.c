#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows and columns)
 *
 * Description: Prints the sum of the main diagonal and the
 *              secondary diagonal of a square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
    int i;
    unsigned int sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];                  /* main diagonal */
        sum2 += a[i * size + (size - 1 - i)];    /* secondary diagonal */
    }

    printf("%u, %u\n", sum1, sum2);
}
