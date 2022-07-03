#include <stdio.h>
/**
 * main - Prints the numbers and alphabets with both sims up
 * to 16, only using 3 putchars.
 * Return: 0.
 */
int main(void)
{
	int numb;
	char alph;
		for (numb = 0; numb < 10; numb++)
		{
			putchar((numb % 10) + '0');
		}
		for (alph = 'a'; alph < 'g'; alph++)
		{
			putchar(alph);
		}
	putchar('\n')'
	return (0);
}
