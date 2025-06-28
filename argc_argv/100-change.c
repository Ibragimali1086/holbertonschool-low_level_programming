#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum sikkələrin sayını çap edir
 * @argc: arqument sayı
 * @argv: arqumentlər
 * Return: 0 uğurlu, 1 səhv
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)  /* arqument sayı yoxlanılır */
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0) /* mənfi olarsa 0 çap et */
	{
		printf("0\n");
		return (0);
	}

	/* 25 sentlik sikkələr */
	coins += cents / 25;
	cents %= 25;

	/* 10 sentlik sikkələr */
	coins += cents / 10;
	cents %= 10;

	/* 5 sentlik sikkələr */
	coins += cents / 5;
	cents %= 5;

	/* 2 sentlik sikkələr */
	coins += cents / 2;
	cents %= 2;

	/* 1 sentlik sikkələr */
	coins += cents;

	printf("%d\n", coins);

	return (0);
}
