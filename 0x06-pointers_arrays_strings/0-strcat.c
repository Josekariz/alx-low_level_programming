#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
    int dlen = 0;
    int slen = 0;
    int i;

    for (i = 0; dest[i] != '\0'; i++)
    {
        dlen++;
    }

    for (i = 0; src[i] != '\0'; i++)
    {
        slen++;
    }

    for (i = 0; i <= slen; i++)
    {
        dest[dlen + i] = src[i];
    }

    return (dest);
}
