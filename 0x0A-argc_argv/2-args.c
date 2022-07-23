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
	int i = 0;

	while (i < argc)
	printf("%s\n", argv[i]);
	i++;

	return (0);
}
