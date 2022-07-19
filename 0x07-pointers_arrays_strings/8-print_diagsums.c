#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -> prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The pointer to the arrar an edtion will be performed at.
 * @size: The size in bytes of that array.
 */

void print_diagsums(int *a, int size)
{

int i = 0, s1 = 0, s2 = 0;
{
	while (i < size)
	{
		s1 += size;
		i++;
	}
	a -= size;

	while (i < size)
	{
		s2 += a[i];
		i++;
		a -= size;
	}
	printf("%d, %d", s1, s2);
}
}
