#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -> Function that allocates memory using malloc.
 * @b: The size of memory that must be allocated.
 *
 * Return: If malloc fails - return status 98
 * Otherwise: Pointer to the allocatd memory.
 */
void *malloc_checked(unsigned int b)
{
int *i;

i = malloc(b);
	if (i == NULL)
		return (NULL);
return (i);
}
