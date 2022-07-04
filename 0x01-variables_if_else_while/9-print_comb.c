#include <stdio.h>
/**
 * main - Prints all possible combination of a single-digit number,
 * withspace in between and a commar.
 * Return: 0.
 */

int main(void)
{
int asc;
	for (asc = 0; asc <= 9 ; asc++)
	{
		putchar((asc % 10) + '0');
		if (asc == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
