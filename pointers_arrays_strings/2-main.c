#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f;

	f = _strchr(s, ',');
	if (f != NULL)
		printf("Found ',' at: %s\n", f);

	f = _strchr(s, 'a');
	if (f != NULL)
		printf("Found 'a' at: %s\n", f);
	else
		printf("Character 'a' not found\n");

	f = _strchr(s, '\0');
	if (f != NULL)
		printf("Found '\\0' at: %s\n", f);

	return (0);
}
