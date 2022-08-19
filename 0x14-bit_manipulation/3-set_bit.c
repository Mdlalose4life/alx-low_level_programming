#include "main.h"
#include <stdio.h>
/**
 * get_bit - sets the value of a bit to 1 at a given index.
 * @index: index at the value to be obtained: starts from 0.
 * @n: The bit.
 * Return: returns -1 if an error occured.
 * otherwise: Return 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
*n ^= (1 << index);
return (1);
}
