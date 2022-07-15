#include "main.h"
#include <stdio.h>
/**
 * Changes all lowercase latter of a string to uppercase.
 *
char *string_toupper(char )
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
