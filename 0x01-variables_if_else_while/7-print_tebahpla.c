#include <stdio.h>
/**
 * main - Prints the lowercase alphabet from z to a,
 * using only putchar.
 * Return: Always 0.
 */
int main(void)
{
char alph;
	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}
	putchar('\n')
	return (0);
}
