#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *my_buffer(char *pf);
void end_file(int fc);
/**
 * my_buffer -> Allocates 1024 byes for buffer.
 * @fp: The file on which the buffer is storing
 * it's contents.
 * Return: A pointer to the allocated buffer.
 */
char *my_buffer(char *fp)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
	dprintf(STDERR_FILENO,
	"Error: File %s cannot be written\n", fp);
	exit(99);
}
return (buffer);
}
/**
 * end_file - closses the file desriptors.
 * @fc: The descriptor to be closed
 */
void end_file(int fc)
{
int a;
a = close(fc);
if (a == -1)
{
	dprintf(STDERR_FILENO, "Error: Cant't close fc %d\n", fc);
	exit(100);
}
}
/**
 * main - coppies src to dest.
 * @argc: counts number of arguments given to the function.
 * @argv: The actual arguments given to a funtion, in array.
 * Return: Always 0. (success)
 */
int main(int argc, char *argv[])
{
int src, dest, x, y;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: coppy file_from file_to\n");
exit(97);
}
buffer = my_buffer(argv[2]);
src = open(argv[1], O_RDONLY);
x = read(src, buffer, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (src == -1 || x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
free(buffer);
exit(98);
}
y = write(dest, buffer, x);
if (dest == -1 || y == -1)
{
dprintf(STDERR_FILENO, "Error : Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
x = read(src, buffer, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);
} while (x > 0);
free(buffer);
end_file(src);
end_file(dest);
return (0);
}
