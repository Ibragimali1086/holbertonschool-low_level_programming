#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    char c;

    srand(time(NULL));

    while (sum < 2772)
    {
        c = rand() % 94 + 33; /* ASCII 33 to 126 */
        if (sum + c > 2772)
            break;
        sum += c;
        putchar(c);
    }

    putchar(2772 - sum); /* Add the last char to make sum 2772 */
    return (0);
}
