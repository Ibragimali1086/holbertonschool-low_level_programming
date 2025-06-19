#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int c = 122; /* ASCII kodu 'z' */

    while (c >= 97) /* 97 - ASCII kodu 'a' */
    {
        putchar(c);
        c--;
    }
    putchar('\n');

    return (0);
}
