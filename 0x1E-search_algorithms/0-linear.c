#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search -> Function that searches for a value in an array of intergers.
 * @array: Pointer to the array that needs to be searched.
 * @size: Size an array to be searched.
 * @value: The target element to be searched on an array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
	{
		return -1;
	}
	
	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
