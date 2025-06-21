#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a newline
 * @s: Pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len--)
		write(1, &s[len], 1);

	write(1, "\n", 1);
}
