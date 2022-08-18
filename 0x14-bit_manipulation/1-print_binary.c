#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: Number to be converted to binary.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
	n >> 1;
_putchar((n & 1) + '0');
}
