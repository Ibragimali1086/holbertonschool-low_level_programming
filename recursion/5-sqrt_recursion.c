#include "main.h"

/**
 * _sqrt_helper - checks for natural square root recursively
 * @n: number to find square root of
 * @i: iterator number to check
 *
 * Return: natural square root or -1 if none
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root or -1 if none or n < 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
