#include <stdio.h>
/**
 * main -> prints its name, followed by a new line.
 * @argc: number of arguments provided to a program.
 * @argv: Array of pointer to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
