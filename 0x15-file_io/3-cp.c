#include "main.h"

#define USAGE "usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (0664)

/**
 * main - program
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 in success 0 0n failure
 */
int main(int argc, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((bytes = read(from_fd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	return (1);
}
