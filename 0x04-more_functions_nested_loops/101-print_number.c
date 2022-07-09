#include "main.h"
/**
 * print_numbers - print random intergers
 * @n: random interges to be printed.
 */

void print_number(int n)

{
	unsigned int var = n;

	if (n < 0)
	{
		_putchar('-');
		var = -var;
	}

	if ((var / 10) > 0)
		print_numbe(var / 10);
		_putchar((var % 10) + '0');
}
