#include "main.h"
#include <stdio.h>
/**
 * _strchr -> Locates the first occurance of a character on a string.
 * @c: Character whose occuranced isbeing searched.
 * @s: The string in which occurance of c is searched.
 * Return: pointer to the occurance of c.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (s + i);

	}
	return ('\0');
}
