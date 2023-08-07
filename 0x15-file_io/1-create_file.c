#include "main.h"

/**
 * _strlen - gets string length
 * @string: string that we need its length
 * Return: string length
 */
int _strlen(char *string)
{
	int i = 0;

	if (!string)
		return (0);

	while (*string++)
		i++;
	return (i);
}


/**
 * create_file - function that creates a file
 * @filename: name of file i want to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | 0600);
	if (fd == -1)
		return (-1);

	if (len)
		byte = write(fd, text_content, len);
	close(fd);
	return (byte == len ? 1 : -1);
}
