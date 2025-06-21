#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to use
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /* find the end of dest */
		i++;

	j = 0;
	while (j < n && src[j] != '\0') /* append at most n bytes */
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'; /* null terminate */

	return (dest);
}

