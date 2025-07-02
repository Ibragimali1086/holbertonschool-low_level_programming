#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, total_len = 0;
	char *result;
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1; /* +1 for '\n' */
	}

	result = malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[pos++] = av[i][j];
		}
		result[pos++] = '\n';
	}
	result[pos] = '\0';

	return (result);
}
