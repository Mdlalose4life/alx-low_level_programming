#include <stdio.h>
/**
 * main -> prints all possible different combinations
 * of three digits.
 * Return: Always 0 (success).
 */
int main(void)
{
int var, var1, var2;
for (var = 0; var <= 8; var++)
{
	for (var1 = var + 1; var1 <= 9; var1++)
	{
		for (var2 = var1 + 1; var2 < 10; var2++)
		{
			putchar((var % 10) + '0');
			putchar((var1 % 10) + '0');
			putchar((var2 % 10) + '0');
			if (var == 7 && var1 == 8 && var2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
