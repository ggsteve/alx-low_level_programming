#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program writes a specified text to the standard error.
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
