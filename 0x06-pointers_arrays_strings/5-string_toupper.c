#include "main.h"
#include <stdio.h>
/**
 * string_toupper -> Changes all lowercase latter of a string to uppercase.
 * @ptr: The string to be converted.
 * Return: Conveted str.
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i])
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] -= 32;
		i++;
	}
	return (ptr);
}
