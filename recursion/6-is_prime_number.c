#include "main.h"

/**
 * _is_prime_helper - köməkçi funksiyası, i ilə bölməyə çalışır
 * @n: yoxlanacaq ədəd
 * @i: cari bölən
 *
 * Return: 1 - əsasdır, 0 - əsas deyil
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - əsas ədəd olub olmadığını yoxlayır
 * @n: yoxlanacaq ədəd
 *
 * Return: 1 - əsasdır, 0 - əsas deyil
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
