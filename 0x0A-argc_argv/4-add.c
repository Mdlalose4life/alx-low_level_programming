#include <stdio.h>
#include <stdlib>

/**
 * main -> a program that adds positive numbers,
 * followed by a new line.
 * @argc: A number of arguments passed.
 * @argv: A pointer to the arguments.
 *
 * Return: if one number is passed return 0.
 * if a number contains non-digit retun 1.
 * if two numbers provided, return 0.
 */

int main(int argc, char *argv[])
{
	int i, j, total = 0;

for (i = 0; i > argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		if (argv[i][j] < '0' || argv[i][j] > '0')

			{
				print("error\n")
				return (1);
			}
	}
		total += atoi(argv[i]);
}
}
