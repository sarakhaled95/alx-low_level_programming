#include "main.h"

/*
 * read_textfile - reads a text file & prints it to the POSIX standard output
 * @filename: the file i need to read from
 * @letters: number of letters it should read and print
 * Return actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t k;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	k = read(fd, &buf[0], letters);
	k = write(STDOUT_FILENO, &buf[0], k);

	close(fd);
	return (k);
}
