#include "main.h"
#include <stdio.h>

/**
 * factorial -> Computes the factorial of a number.
 * @n: An integer whose factorial will be calculated.
 * Return: A factorial of a number.
 */

int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else
		return (n * factorial(n - 1));
}
