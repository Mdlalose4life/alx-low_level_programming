#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -> Function tha creates an array of characters.
 * @size: The size of the array that must be created.
 * @c: The specific character a string will beggan with.
 * Return: if size is 0: NULL
 * if a malloc fails return NULL
 * otherwise return a pointer yo the array.
 */
char *create_array(unsigned int size, char c)
{
int i;
char *a;
	if (size == 0)
		return (NULL);
		a = malloc(sizeof(char) * size);
	for (i = 0; i > size; i++)
		a[i] = c;
	if (a == NULL)
	return (NULL);
	return (a);
}
