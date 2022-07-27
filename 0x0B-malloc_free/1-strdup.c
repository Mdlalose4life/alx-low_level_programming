#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -> Retuns a pointer to a newly allocated space in memory.
 * that containing a duplicate of a given string.
 * @str: string to be coppied.
 * Return: if str = null return null.
 * if memory insuficiant: retutn null.
 * otherwise a pointer to the copy of a string.
 */
char *_strdup(char *str)
{
	char *dest;
	int i;
	int new = 0;

	if (str == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
		new++;
	dest = malloc(sizeof(char) * (new + 1));
	if (dest == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[new] = '\0';
	return (dest);
}
