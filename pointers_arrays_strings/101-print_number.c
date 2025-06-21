#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to print
 *
 * Description: recursively prints each digit.
 */
void print_number(int n)
{
    /* Addım 1: Mənfi ədədi işarə et və n-i müsbət et */
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /* Addım 2: 10-dan böyük ədədlərdə sol tərəfdən başlayaraq rəqəmləri çap et */
    if (n / 10) /* n / 10 = n-in 10-luğundakı hissə */
        print_number(n / 10);

    /* Addım 3: Son rəqəmi çap et */
    _putchar((n % 10) + '0');
}
