#include <stdio.h>
/**
 * main -  a program that prints the number of arguments passed into it.
 * argc: Arguments passed
 * argv: Pointer to the arguments provided.
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)), *argv[])
{
	printf("%s\n", argv - 1);
		return (0);
}
