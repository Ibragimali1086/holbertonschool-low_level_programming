#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_check - Checks if a string is a palindrome.
 * @s: The string to check.
 * @start: Start index.
 * @end: End index.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int _palindrome_check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_palindrome_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	return (_palindrome_check(s, 0, len - 1));
}
