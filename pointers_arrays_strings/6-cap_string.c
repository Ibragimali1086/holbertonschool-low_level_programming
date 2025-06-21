#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
    int i = 0;

    /* Böyük hərf üçün ilk simvol yoxlanılır */
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;

    while (str[i])
    {
        /* Söz ayrıcı simvollar */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            /* Sonrakı simvolun kiçik hərf olub-olmaması yoxlanılır */
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] -= 32;
        }
        i++;
    }
    return (str);
}
