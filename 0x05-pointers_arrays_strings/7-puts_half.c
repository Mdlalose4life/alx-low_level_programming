#include "main.h"
#include <string.h>
/**
 *puts_half - Prints halp of the string followed by a new line.
 *@str: The string whose halp will be printed
 */

void puts_half(char *str)
{
	int m, n, i;

	m = strlen(str);
	if (m % 2 == 1)
		n = m / 2 + 1;
	else
		n = m / 2;

	for (i = n; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
