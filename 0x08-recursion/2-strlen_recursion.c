#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -> A function that returns a length of a string.
 * @s: The string whose length will be returned.
 * Return: Length of a string s.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
