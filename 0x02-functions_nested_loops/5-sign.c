#include "main.h"
/**
 * print_sign - prints sign of a number.
 * @n: The number for which sign will be printed.
 * Return: Return 1 if the number is greater than zero.
 * Return 0 if the number is zero.
 * Return -1 if the number is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
