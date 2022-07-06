#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the passed arguments
 * Return: the last digit.
 */
int print_last_digit(int n)

{
	int numb = n % 10;

	if (n < 0)
	numb  *= -1;
	_putchar(numb + '0');
	return (numb);
}
