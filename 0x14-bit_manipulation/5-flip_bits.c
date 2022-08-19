#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: The bits.
 * @m:  Number of flips to n.
 * Return: Number of lipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bit = 0;
while (xor > 1)
{
	bit += (xor & 1);
	xor >>= 1;
}
return (bit);
}
