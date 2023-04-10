#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters:  the number of letters the function should read and print
 *
 * Return:  actual number of letters it could read and print on success
 * 0 if filename is NULL, if it canot be opened or read or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if ((o == -1) || (r == -1) || (w == -1))
		return (0);

	free(buff);
	close(o);

	return (w);
}
