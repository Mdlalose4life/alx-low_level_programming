#include <stdio.h>
#include "main.h"
/**
 * _strpbrk -> searches a string for any of a set of bytes.
 * @s: string that is searched for occurance of character at accept.
 * @accept: contains bytes we are searching for @s.
 * Return: return a pointer of byte @s that matches accept,
 * or nul, if no match.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i] > '\0' ; i++)
		{
		if (*s == accept[i])
			return (s);
		}
	}
return ('\0');
}
