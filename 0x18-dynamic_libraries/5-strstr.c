#include "main.h"
#include <stdio.h>

/**
 *_strstr -> a function that locates a substring.
 *@haystack: A string to be searched.
 *@needle: The substring to be located.
 *Return: If the strin @needle is located -
 *return a pointer to the begganing of the located substring.
 *If not located - return NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i;
	if (*needle == 0)
		return (haystack);
	for (; *haystack; haystack++)
	{
	i = 0;
	if (haystack[i] == needle[i])
		do {
		if (needle[i + 1] == '\0')
		{
			return (haystack);
			i++;
		}
		} while (haystack[i] == needle[i]);
	}
	return ('\0');
}
