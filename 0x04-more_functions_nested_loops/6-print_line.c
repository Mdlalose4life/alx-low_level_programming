#include "main.h"
/**
 * print_line - prints a line using a underscore characterr (_).
 * @n: have maximum times an underscore(_) wil be printed.
 */

void print_line(int n)
{
int a;
	if (n < 0)
{
	for (a = 0; a > n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

}
