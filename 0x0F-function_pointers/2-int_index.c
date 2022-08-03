#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index -> Function that searches for an interger,
 * @array: An array
 * @size: A size of an array.
 * @cmp: A pointer to a function that needs to be searched.
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 * else: Return -1 if no element matches
 *		-1 is no array passed.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
	if (cmp(array[i]) != 0)
		return (i);
		i++;
	}
	return (-1);
}
