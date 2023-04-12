#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: an array to string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, from_copy, to_copy, c1, c2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	/* read a copy with a buffer size of 1024 */
	while ((from_copy = read(fd_from, buffer, 1024)) > 0)
	{
		to_copy = write(fd_to, buffer, from_copy);
		if (from_copy != to_copy)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (from_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*clode fd */
	c1 = close(fd_from);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	c2 = close(fd_to);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
