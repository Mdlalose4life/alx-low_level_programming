#include <stddef.h>
#include "main.h"
/**
 * create_file -> creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the contents to be written
 * on the file.
 * Return: 1
 * or -1 if the function fails.
 */
int create_file(const char *filename, char *text_content)
{
int x, y, length = 0;
if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (length = 0; text_content[length];)
		length++;
}
x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
y = write(x, text_content, length);
if (x == -1 || y == -1)
	return (-1);
close(0);
return (1);
}
