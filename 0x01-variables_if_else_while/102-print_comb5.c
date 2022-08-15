#include <stdio.h>
/**
 * main - program that prints all possible
 * combinations of two two-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
int var, var1;
for (var = 0; var <= 98; var++)
{
	for (var1 = var + 1; var1 <= 99; var1++)
	{
		putchar((var / 10) + '0');
		putchar((var % 10) + '0');
		putchar(' ');
		putchar((var1 / 10) + '0');
		putchar((var1 % 10) + '0');
		if (var == 98 && var1 == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
