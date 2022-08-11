#include <stdio.h>
#include "main.h"
/**
 * reverse_array -> reverses a string.
 * @a: a string to be reversed.
 * @n: the number of charactes to be reversed.
 */

void reverse_array(int *a, int n)
{
int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
