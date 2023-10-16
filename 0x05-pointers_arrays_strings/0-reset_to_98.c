#include <stdio.h>

/* Function prototype */
void reset_to_98(int *n);

int main(void)
{
    int number = 42;

    /* Display the original value */
    printf("Original value: %d\n", number);

    /* Call the function to reset the value to 98 */
    reset_to_98(&number);

    /* Display the updated value */
    printf("Updated value: %d\n", number);

    return 0;
}

