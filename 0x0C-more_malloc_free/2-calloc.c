#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array using
 * @nmemb: The number of elements on an array.
 * @size: The space in bytes to be allocated for an array.
 *
 * Return: if nmemb and size = 0 - return: NULL
 * if mailloc fails retun: NULL
 * otherwise: return a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *b;
char *a;
	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	a = b;
	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';
	return (b);
}
