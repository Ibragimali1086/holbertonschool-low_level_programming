#include "main.h"

/**
 * print_number - prints an integer with _putchar
 * @n: the integer to print
 *
 * Description: Only _putchar allowed, no arrays or long
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10 != 0)
        print_number(num / 10);

    _putchar((num % 10) + '0');
}
