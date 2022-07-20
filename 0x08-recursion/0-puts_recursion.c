#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -> prints a string, followed by a new line.
 * @s: The passed string to be printede.
 */

void _puts_recursion(char *s)
{
if (*s > '\0')
{
	puts("*s");
	_puts_recursion(s + 1);
}
else
	puts("\n");
}
