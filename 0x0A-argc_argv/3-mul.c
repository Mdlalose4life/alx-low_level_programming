#include <stdio.h>
#include <stdlib.h>
/**
 * main -> A program that adds two possitive numbers, followed by newline.
 * @argc: Number of arguments passed.
 * @argv: Pointer to the arguments passed.
 * Return: if one argument don't receive a number: return 1.
 * If arguments receives two numbers return 0.
 */

int main(int argc, char, *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}


