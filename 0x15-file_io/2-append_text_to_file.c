#include "main.h"
/**
 * _strlen - gets string length
 * @s: string
 * Return: srting length
 */
int _strlen(char *s)
{
	int c;

	if (!s)
		return (0);

	while (*s++)
		c++;
	return (c);
}


/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
		return (-1);

	if (len)
		byte = write(fd, text_content, len);
	close(fd);
	return (byte == len ? 1 : -1);
}
