#include "main.h"
#include <stdio.h>
/**
 * clear_bit - the value of a bit to 1 at a given index.
 * @index: index at the value to be obtained: starts from 0.
 * @n: The bit.
 * Return: returns -1 if an error occured.
 * otherwise: Return 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(n) * 8))
	return (-1);
*n &= ~(1 << index);
return (1);
}
