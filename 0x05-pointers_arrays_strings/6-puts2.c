#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character of a string.
 * @str: string to be printed
 */

void puts2(char *str)

{
	int l;
	int i;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
