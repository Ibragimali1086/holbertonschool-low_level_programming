#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[5] = {98, 402, 1024, 1337, 4096};
	int *p = &a[0];

        printf("a[2] = %d\n", *(p + 2));
	return (0);
}



/* extra blank lines to reach 23 total lines */



