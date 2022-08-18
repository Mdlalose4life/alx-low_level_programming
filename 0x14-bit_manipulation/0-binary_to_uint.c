#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 of characters.
 * Return: 0 if string b do not contain 0 or 1 character
 * and if b contains NULL
 * otherwise: return the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int var = 0, mult = 1;
int length;
if (*b == '\0')
	return (0);
for (length = 0; b[length];)
	length++;
for (length -= 1; length >= 0; length--)
{
	if (b[length] != '0' && b[length] != '1')
		return (0);
	var += (b[length] - '0') * mult;
	mult *= 2;
}
return (var);
}
