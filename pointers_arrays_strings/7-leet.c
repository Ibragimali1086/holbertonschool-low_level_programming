#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
    int i, j;
    char letters[] = {'a', 'e', 'o', 't', 'l'};
    char codes[] = {'4', '3', '0', '7', '1'};

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            /* Only one if is allowed */
            if (str[i] == letters[j] || str[i] == letters[j] - 32)
            {
                str[i] = codes[j];
                break;
            }
        }
    }
    return (str);
}
