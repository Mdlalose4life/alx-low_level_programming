#include "main.h"
#include <stdio.h>

/**
 * _memset -> Function that fills memory with constant.
 * @s: Pointer to the location where the memory will be set.
 * @b: The valuer to be coppied.
 * @n: number of bytes that will be filled.
 * Return: pointer to a filled s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
unsigned int *dest = s;
for (i = 0; dest < n; i++)
	dest[i] = b;

return (s);
}
