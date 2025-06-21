#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0, l = 0, m = 0, carry = 0, digit1 = 0, digit2 = 0, sum = 0;

    while (n1[i] != '\0')
        i++;
    while (n2[j] != '\0')
        j++;
    i--;
    j--;

    if (size_r <= (i > j ? i : j) + 2)
        return (0);

    while (i >= 0 || j >= 0 || carry)
    {
        digit1 = (i >= 0) ? n1[i--] - '0' : 0;
        digit2 = (j >= 0) ? n2[j--] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k++] = (sum % 10) + '0';
    }

    if (k >= size_r)
        return (0);

    r[k] = '
