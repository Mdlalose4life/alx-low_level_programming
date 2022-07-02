#include <stdio.h>
/**
 * main - prints all the alphabets in lowercase, not e and q
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	}
putchar('\n');
return (0);
}
