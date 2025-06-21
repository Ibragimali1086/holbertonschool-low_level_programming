#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints second half of a string, followed by a newline.
 * If odd length, prints from (length - 1) / 2 + 1
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int i = 0, len = 0, n;

	/* First: find length of string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* If length is even, start at len / 2; else (len - 1) / 2 + 1 */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	/* Print from index n to end */
	for (i = n; i < len; i++)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
