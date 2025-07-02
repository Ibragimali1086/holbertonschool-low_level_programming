#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, initialized to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	fill = ptr;
	for (i = 0; i < (nmemb * size); i++)
		fill[i] = 0;

	return (ptr);
}
