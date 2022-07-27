#include "main.h"
/**
 * _isdigit - checks for a digit between 0 and 9.
 * @c: provided variables to a function.
 * Return: 1 if c is a digit, return 0 oterwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
