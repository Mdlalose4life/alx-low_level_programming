#include "main.h"
/**
 *_islower -Check if a given character is lower case.
 *@c: The character to be cheched.
 *
 * Return: 1 if character is lowewercase, 0 otherwise.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
