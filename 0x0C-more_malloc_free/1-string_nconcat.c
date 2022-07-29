#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concanates two strings.
 * @s1: first string to be concanated.
 * @s2: second string to concanated.
 * @n: The space of s2 in bytes.
 * Return: if Fucnction fails - return NULL.
 * if n >= s2 - return s2.
 * if NULL is passed - Empty space
 * otherwise: return pointer to concanated s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, l = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return (NULL);
	s2 = malloc(sizeof(char) * n);
	while (s2[l++])
		l++;
	for (i = 0; s1[i] && i < n; i++)
		s2[l++] = s1[i];
	return (s2);
}
