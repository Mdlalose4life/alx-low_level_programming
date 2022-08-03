#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name -> The function to be printed.
 *@name: Name of a function.
 *@f: The pointer to a function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
