#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -> Retuns a pointer tu a newly allocated space in memory.
 * @str: string whose copy is co
 */
char *_strdup(char *str)
{
	char *dest;
	int i;
	int new = 0;

	if (str == NULL)
	return (NULL);
	for (i = 0; str[i];i++);
		new++;
	dest = malloc(sizeof(char) * (new + 1));
	if (dest == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[new] = '\0';
	return (dest);
}
