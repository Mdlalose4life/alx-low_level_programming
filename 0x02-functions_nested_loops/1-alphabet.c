#include "main.h"
/**
 * main - This is a function that printd alphabets in lowercase
 * followed by a new line.
 * Return: 0.
 */

void print_alphabet(void)
{
char alph;
	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	retun(0);
}
