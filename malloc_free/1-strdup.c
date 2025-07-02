#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * containing a copy of the string
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string or NULL if str is NULL
 * or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
