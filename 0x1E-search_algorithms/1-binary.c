#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - The Function to perfom binary serch
 * in an array.
 * @array: An array to be searched
 * @size: size of an array to be searched
 * @value: The value to search for in an array
 * Return: retuns the searched value or -1 if
 * none is found.
 */
int binary_search(int *array, size_t size, int value)
{
	int lower, mid, higher;
	int i;
	
	if (array == NULL)
	{
		return (-1);
	}
	
	higher = size - 1;
	lower = 0;
	
	while(lower <= higher)
	{
		mid = (lower + higher)/2;
		
		printf("Searching in array: ");
		for (i = lower; i <= higher; i++)
			printf("%i%s", array[i], i == higher ? "\n": ", ");

		if (array[mid] < value)
			lower = mid + 1;
		else if (array[mid] > value)
			higher = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
