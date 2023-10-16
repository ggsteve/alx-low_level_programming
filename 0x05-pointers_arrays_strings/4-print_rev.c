#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to print.
 *
 * Description: This function prints the characters of a string in reverse
 * order, followed by a new line.
 */
void print_rev(char *s)
{
	int c = 0;

	/* Calculate the c of the string */
	while (s[c] != '\0')
	{
		c++;
	}

	/* Print the string in reverse */
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	/* Print a new line */
	_putchar('\n');
}

