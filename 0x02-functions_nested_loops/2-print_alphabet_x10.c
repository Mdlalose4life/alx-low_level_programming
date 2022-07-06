#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 */

void print_alphabet_x10(void)

{
	int numb;
	char alph;
	for (numb = 0; numb < 10; numb++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
		putchar(alph);
		putchar('\n');
		}
	}
}
