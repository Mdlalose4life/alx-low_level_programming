#include "search_algos.h"
/**
 *
 *
 *
 *
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int lower, mid, higher;
	int i;
	lower = 0;
	higher = size + 1;
	if (array == NULL)
	{
		return (-1);
	}
	
	while(lower <= higher)
	{
		mid = (lower + higher)/2;
		
		printf("Searching in array: ");
		for (i = lower; i <= higher; i++)
			printf("%i%s", array[i], i == higher ? "\n": ", ");
		
		if (array[mid] == value)
			return mid;
		
		if (array[mid] < value)
			lower = mid + 1;
		else if (array[mid] > value)
			higher = mid -1;
		else
			return (mid);
	}
	return (-1);
}
