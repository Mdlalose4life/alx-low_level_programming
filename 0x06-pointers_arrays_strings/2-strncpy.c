#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy -> coppies one string to another.
 * @dest: A string to be coppied to.
 * @src: A string that is coppird to.
 * @n: The Number of bytes to be coppied.
 * Return: dest with a coppy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (src[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
