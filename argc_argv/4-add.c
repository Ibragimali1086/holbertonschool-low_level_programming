#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - yoxlayır ki, sətir tam ədəddirmi
 * @str: yoxlanılacaq sətir
 * Return: 1 əgər tam ədəd, 0 əks halda
 */
int is_number(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	if (str[0] == '-' || str[0] == '+')
		i++;

	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - arqumentlərdəki müsbət ədədləri toplayır
 * @argc: arqumentlərin sayı
 * @argv: arqumentlərin massividir
 * Return: 0 uğurlu, 1 səhv
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
