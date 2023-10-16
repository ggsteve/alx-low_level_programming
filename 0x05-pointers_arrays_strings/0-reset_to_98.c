#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: Pointer to an integer.
 */
void reset_to_98(int *n)
{
	/* Dereference the pointer and set the value to 98 */
	*n = 98;
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	int number = 42;

	/* Display the original value */
	printf("Original value: %d\n", number);

	/* Call the function to reset the value to 98 */
	reset_to_98(&number);

	/* Display the updated value */
	printf("Updated value: %d\n", number);

	return (0);
}

