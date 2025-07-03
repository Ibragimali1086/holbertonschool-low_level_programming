#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value included in the array
 * @max: maximum value included in the array
 *
 * Return: pointer to the newly created array
 *         NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = (int *) malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
