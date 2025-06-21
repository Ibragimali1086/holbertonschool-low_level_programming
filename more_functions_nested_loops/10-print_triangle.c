#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: the size of the triangle
 *
 * Description: prints a right-aligned triangle of size 'size'.
 * If size <= 0, prints only a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print spaces */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* print '#' */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
