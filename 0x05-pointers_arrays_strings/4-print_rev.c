#include "main.h"
#include <stdio.h>

/**
 * print rev - Prints a string in reverse
 * @Gs: The string to print
 * Retin: void
 */

void print_rev(char *s)
{
	int c = 0;
      while (s[c] != '\0') 
      {
      c++;
      }      
      
      for (c -= 1; c >= 0; c--)
      {	      
      putchar(s[c]);
      }
      _putchar ('\n');
}
