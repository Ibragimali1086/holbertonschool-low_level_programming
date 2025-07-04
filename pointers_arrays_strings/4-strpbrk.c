#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the source string
 * @accept: the characters to match
 *
 * Return: pointer to the byte in s that matches one of accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return(0);
}
