#include "main.h"

/**
 * _strncat - concatenates two strings using at most
 * an inputted number of bytes from src
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int index = 0, dest_len = 0;

    /* Find the length of dest */
    while (dest[index])
        dest_len++;

    /* Append at most n bytes from src to dest */
    for (index = 0; src[index] && index < n; index++)
        dest[dest_len++] = src[index];

    /* Null-terminate the resulting string */
    dest[dest_len] = '\0';

    return dest;
}
