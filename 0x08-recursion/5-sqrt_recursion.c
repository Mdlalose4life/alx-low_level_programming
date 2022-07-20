#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion -> function that returns the natural
 * square root of a number.
 * @n: The Number whose roots will be retuned.
 * Return: if n does not have root: fuction returns -1.
 * If n does have roots: return the roots of n.
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else if (n > 0)
	{
	_sqrt_recursion(r);
	}
	return (n);
}
