#include <stdio.h>
#include "main.h"
/**
 * _strspn -> Calculating langth of prefix.
 * @s: main C strinh to be snaccened.
 * @accept: strint to be marched with s.
 * Return: b with number of scanned prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
			b++;
			break;
			}
			else if (accept[i + 1] == '\0')
			return (b);
		}
		s++;
	}
	return (b);
}
