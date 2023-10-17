#include "main.h"
#include <stdio.h>

/* Function prototype */
int _atoi(char *s);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%i\n", nb);
    nb = _atoi("-402");
    printf("%i\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%i\n", nb);
    nb = _atoi("214748364");
    printf("%i\n", nb);
    nb = _atoi("0");
    printf("%i\n", nb);
    nb = _atoi("Suite 402");
    printf("%i\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%i\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%i\n", nb);
    return (0);
}
