#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the a string and follow by a new line.
 * @str: The string to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
