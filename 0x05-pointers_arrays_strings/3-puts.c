#include "main.h"

/**
 * _puts - Prints a string
 * @ estr: The string to print
 * Returnt void
 */
void _puts(char *str)

{
	 for (; *str != '\0'; str++)
	 {
	 _putchar(*str);
	 }
	 _putchar('\n');

}	 
