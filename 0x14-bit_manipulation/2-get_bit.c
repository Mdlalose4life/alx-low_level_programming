#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index at the value to be obtained: starts from 0.
 * @n: The bit.
 * Return: returns -1 if an error occured.
 * otherwise: Return the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(n) * 8))
	return (-1);
if ((n & (1 << index)) == 0)
	return (0);
return (1);
}
