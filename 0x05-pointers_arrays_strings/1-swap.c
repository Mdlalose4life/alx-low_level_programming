#include "main.h"
/**
 * swap_int - swaps the values of two intergers.
 * @a: parameter 1.
 * @b: parameter 2.
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
