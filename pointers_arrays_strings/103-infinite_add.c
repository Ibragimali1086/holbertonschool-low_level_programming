#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store the result
 * @size_r: size of buffer r
 *
 * Return: pointer to result string or 0 if it doesn't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1; // r massivinin sondan yeri (son simvol '\0' üçün)
    int carry = 0, sum;

    r[k] = '\0'; // sonuna terminator qoy
    k--;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';
        if (k < 0)
            return 0;
        r[k--] = (sum % 10) + '0';
        carry = sum / 10;
    }

    k++;

    // Nəticəni massiv önünə köçür
    int start = 0;
    while (r[k] != '\0')
    {
        r[start++] = r[k++];
    }
    r[start] = '\0';

    return r;
}
