#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for 101-crackme
 * Return: 0
 */
int main(void)
{
    int i;
    char password[7]; // Parol 6 simvoldan ibarətdir, sonuncu '\0' üçün yer

    srand(time(NULL)); // Random toxumu təyin et

    for (i = 0; i < 6; i++)
    {
        password[i] = 'a' + rand() % 26; // a-z arasında təsadüfi simvol
    }
    password[6] = '\0'; // string bitirici

    printf("%s\n", password);

    return (0);
}
