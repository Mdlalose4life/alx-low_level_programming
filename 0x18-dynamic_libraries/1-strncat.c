#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat -> function that concatenates two strings.
 * @dest: First string to be concanated.
 * @src: Second string to be concanated.
 * @n: Number of charactars to be concanted.
 * Return: concanated dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}
