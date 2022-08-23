#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output.
 * @filename: The pointer to name of the file.
 * @letters: latters to be read out.
 * Return: if file cannot open return 0.
 * if file is NULL return 0.
 * if write failes: Return 0
 * otherwise: return the number of latters
 * it reads and prints.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t x, y, z;
char *buffers;
if (filename == NULL)
	return (0);
buffers = malloc(sizeof(char) * letters);
if (buffers == NULL)
	return (0);
x = open(filename, O_RDONLY);
y = read(x, buffers, letters);
z = write(STDOUT_FILENO, buffers, y);
if (x == -1 || y == -1 || z == -1 || z != y)
{
	free(buffers);
	return (0);
}
free(buffers);
close(x);
return (z);
}
