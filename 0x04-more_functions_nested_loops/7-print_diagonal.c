#include "main.h"
/**
 * print_diagonal - draw diagonal line on screen using a backslash character.
 * @n: Number of backlash to be printed.
 */

void print_diagonal(int n)

{
	int a;
	
	if (a <= 0)
		_putchar('\n');
	for (a = 0; a <= n; a++)
		_putchar(95);
	_putchar('\n');
}
