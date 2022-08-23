#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The pointer to the filename.
 * @text_content: The pointer to the text that will
 * be appended
 * Return: 1 if succesfull and -1 if it fails.
 * if file name is NULL. Return: -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int x, y, length = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
	for (length = 0; text_content[length];)
	length++;
}
x = open(filename, O_WRONLY | O_APPEND);
y = write(x, text_content, length);
if (x == -1 || y == -1)
	return (-1);
close(0);
return (1);
}
