#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be counted.
 * Return: The number of the counted character on a string.
 */

int _strlen(char *s)
{
	int _strlen = 0;

	while (*s++)
	_strlen++;

	return (_strlen++);
}
