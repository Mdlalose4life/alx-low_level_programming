#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Prints the strings and follow by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to a function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list op;
va_starts(op, n)
for (i = 0; i < n, i++)
{
	str = va_arg(op, char);
	if (char == NULL)
		printf("nil");
	else
		printf("%s", str)
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(op)
}
