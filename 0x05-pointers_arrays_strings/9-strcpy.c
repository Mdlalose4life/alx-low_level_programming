#include "main.h"

/**
 * _strcpy - Coppies the string pointed by src including null character
 *to buffer pointed by dest.
 * @dest: The buffer to coppy to.
 * @src: The buffer to coppy from.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest = '\0');
}
