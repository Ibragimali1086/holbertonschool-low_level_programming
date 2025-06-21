#include "main.h"

/**
 * infinite_add - adds two positive numbers stored as strings
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store the result
 * @size_r: size of the buffer r
 *
 * Return: pointer to result (r), or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum, carry = 0;
	int digit1, digit2;

	/* get length of n1 */
	while (n1[i] != '\0')
		i++;

	/* get length of n2 */
	while (n2[j] != '\0')
		j++;

	i--; /* last index of n1 */
	j--; /* last index of n2 */
	k = 0; /* index for result buffer */

	/* Check if buffer is large enough for result */
	/* max length result can be max(i, j) + 2 (for carry and '\0') */
	if (size_r <= (i > j ? i : j) + 2)
		return (0);

	/* Add digits from right to left */
	while (i >= 0 || j >= 0 || carry)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;

		if (k >= size_r - 1) /* no space for next digit + null terminator */
			return (0);

		r[k] = (sum % 10) + '0';
		k++;
		i--;
		j--;
	}

	r[k] = '\0';

	/* Reverse the result string */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	return (r);
}
