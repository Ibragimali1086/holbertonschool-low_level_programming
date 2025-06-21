#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* tapırıq dest-in sonunu */
    while (dest[i] != '\0')
        i++;

    /* src-ni dest-ə əlavə edirik */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* sonuna null byte qoyuruq */
    dest[i] = '\0';

    return (dest);
}
