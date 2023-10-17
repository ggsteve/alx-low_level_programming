#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Return: void
 */
void puts_half(char *str)
{
	/* Declare variables */
	int j = 0;
	int k;

	/* Calculate string length */
	while (str[j] != '\0')
	{
		j++;
	}

	/* Determine middle index */
	if (j % 2 == 1)
	{
		k = (j - 1) / 2 + 1;
	}
	else
	{
		k = j / 2;
	}

	/* Print second half of the string */
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}

	/* Print newline character */
	_putchar('\n');
}

