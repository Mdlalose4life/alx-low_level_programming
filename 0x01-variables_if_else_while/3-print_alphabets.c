#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	return (0);
}
