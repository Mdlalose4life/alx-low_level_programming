#include "main.h"

/**
 * print_square - printing a square shape using a # characher.
 * @size: The number of # character to be used/
 */

void print_square(int size)

{
	int l;
	int b;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');

			if (l == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
