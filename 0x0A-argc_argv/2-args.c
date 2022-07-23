#include <stdio.h>
/**
 *main - Prints all arguments it recieves
 *@argc: nummber of arguments passed.
 *@argv: Pointer to arguments passed.
 *
 *Return: Always 0.
 */

int main(int argc, char *argv[])

{
	int arg = 0;

	while (arg < argc)
	printf("%s\n", argv[arg]);
	arg++;
	return (0);
}
