#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -> a function that returns the value of
 * x raised to the power of y.
 * @x: Number in place of a base.
 * @y: Number in place of an exponent.
 * Return: The value of a base raised by an exponent.
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)

	x *= _pow_recursion(x, y - 1);

	return (x);
}
