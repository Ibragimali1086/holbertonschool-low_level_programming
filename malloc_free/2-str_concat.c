#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *result;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	else
	{
		len1 = 0;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	else
	{
		len2 = 0;
	}

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';

	return (result);
}
