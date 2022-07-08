#include "main.h"
/**
 * main - prints number from 1 to 100,
 *	prints FizzBuzz intstead of printing multiples of 3 and 5.
 *	printns fizz instead of printing muliples of 3.
 *	prints Buzz instead of printing multiples of 5.
 * Return: 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5) == 0)
			printf("FizzBuzz");

		else if (a % 3 == 0)
			printf("Fizz");

		else if (a % 5 == 0)
			printf("Buzz")

		else
			printf("%d", a);

		if (a == 100)
			continue;
			printf(" ");
	}
	printf("\n");

	return (0);
}
