#include "main.h"
#include <stdio.h>
/**
 * print_chessboard -> a function that prints the chessboard.
 * @a: Number of squres to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; a[r][7]; r++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[r][c]);

		_putchar('\n');
	}
}
