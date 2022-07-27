#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat -> A function that concatenates two strings.
 * @src: First sting to be concanated.
 * @dest: Second string to be concanated.
 * Return: concanated string called dest
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	l = 0;
	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
