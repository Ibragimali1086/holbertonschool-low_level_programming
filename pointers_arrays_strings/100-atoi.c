#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_number = 0;

	/* Skip all characters until the first digit or sign */
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign; /* flip sign for each '-' found */
		else if (s[i] == '+')
			; /* ignore '+' */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_number = 1;
			/* Convert digits to integer */
			result = result * 10 + (s[i] - '0');
		}
		else if (found_number)
			break; /* end of number */
		i++;
	}

	if (!found_number)
		return (0);

	return (sign * result);
}
