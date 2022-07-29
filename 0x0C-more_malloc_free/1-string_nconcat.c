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
char *conc;
	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (i = 0; s1[i]; i++)
		l++;
	conc = malloc(sizeof(char) * (n + 1));
	if (conc == NULL)
		return (NULL);
	while (s1[i])
	{
		conc[l++] = s1[i];
		i++;
	}
	while (s2[i] && i < n)
	{
		conc[l++] = s2[i];
		i++;
	}
	conc[l] = '\0';
	return (conc);
}
