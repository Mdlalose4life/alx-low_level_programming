#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints the string of characters in reverse.
 * @s: The string to be reversed.
 */

void print_rev(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	for (i = len - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
	}
}
