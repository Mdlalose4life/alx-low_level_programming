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
		putchar(',');
		putchar(' ');
	}
	return (0);
}
