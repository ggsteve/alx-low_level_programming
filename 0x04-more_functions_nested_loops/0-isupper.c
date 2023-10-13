#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int main(void)
{
    char testChar = 'G';

    if (_isupper(testChar))
        printf("%c is an uppercase character.\n", testChar);
    else
        printf("%c is not an uppercase character.\n", testChar);

    return (0);
}
