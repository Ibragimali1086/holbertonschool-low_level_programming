#include "main.h"
#include <stdio.h>

/**
 * is_printable - checks if a character is printable
 * @c: the character to check
 *
 * Return: 1 if printable, 0 otherwise
 */
int is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

/**
 * print_hex - prints hex value of a byte
 * @b: the byte
 */
void print_hex(unsigned char b)
{
	printf("%02x", b);
}

/**
 * print_buffer - prints a buffer
 * @b: pointer to buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		// print hex values
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				print_hex((unsigned char)b[i + j]);
			}
			else
			{
				printf("  ");
			}

			if (j % 2)
				printf(" ");
		}

		// print characters
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];
			if (is_printable(c))
				printf("%c", c);
			else
				printf(".");
		}

		printf("\n");
	}
}
