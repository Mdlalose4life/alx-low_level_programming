#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: first value of an array.
 * @max: last value of an array.
 *
 * Return: If min > max - reurn NULL
 * If function fails -retun NULL
 * otherwise - return a pointer to the new array.
 */
int *array_range(int min, int max)
{
int *arr, i, len;
	if (min > max)
	return (NULL);
		len = max - min;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	for (i = 0; i < len; i++)
		arr[i] = min++;
return (arr);
}
