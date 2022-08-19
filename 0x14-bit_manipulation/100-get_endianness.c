#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Checks endianess
 * Return: 0 if big endian
 * 1 if little endian
 */
int get_endianness(void)
{
int y = 1;
char *endian = (char *)&y;
if (*endian == 1)
	return (1);
return (0);
}
