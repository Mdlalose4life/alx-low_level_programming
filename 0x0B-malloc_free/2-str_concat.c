#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
char *conc_str;
int i = 0, conc_i = 0, l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] || s2[i])
		l++;
		i++;
	conc_str = malloc(sizeof(char) * l);
	if (conc_str == NULL)
		return (NULL);
	while (s1[i])
	conc_str[conc_i++] = s1[i];
		i++;
	while (s2[i])
		conc_str[conc_i++] = s2[i];
		i++;
return (conc_str);
}
