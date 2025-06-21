#include "main.h"
#include <stdio.h>

/**
 * is_printable - checks if a character is printable
 * @c: character to check
 *
 * Return: 1 if printable, 0 otherwise
 */
int is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

/**
 * print_hex - prints the hexadecimal representation of a byte
 * @b: the byte to print
 *
 * Return: void
 */
void print_hex(unsigned char b)
{
	printf("%02x", b);
}

/**
 * print_buffer - prints a buffer of size bytes
 * @b: pointer to the buffer to print
 * @size: number of bytes to print
 *
 * Description: Prints 10 bytes per line starting with the
 * offset in hexadecimal, followed by the hex values (two bytes at a time),
 * and then the ASCII representation (printable characters or '.' for others).
 * Prints only a newline if size <= 0.
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
		/* Print the offset */
		printf("%08x: ", i);

		/* Print hex bytes, 2 bytes per group, separated by spaces */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				print_hex((unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		/* Print ASCII representation */
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
