#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates the password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    char password[7];
    int i, sum = 0;

    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        password[i] = 33 + rand() % 94; // ASCII 33-126 aralığında təsadüfi simvol
        sum += password[i];
    }
    password[6] = '\0';

    // Əlavə məntiq - məsələn, sum müəyyən şərti ödəməlidir (bu nümunə deyil)
    if ((sum % 10) != 0)
        password[0] = 'H';  // nümunə üçün şərt

    printf("%s\n", password);
    return (0);
}
