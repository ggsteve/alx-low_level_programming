#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variable declaration */
	int n;

	/* Random number generation and assignment */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Printing the number along with its sign */
	printf("%d is ", n);

	/* Checking the sign of the number */
	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("negative\n");
	}

	return (0);
}
