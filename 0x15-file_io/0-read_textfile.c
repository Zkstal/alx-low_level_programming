#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to print it to STDOUT.
 * @filename: text file for read
 * @letters: number of letters to read
 * Return: actual number of letter read and printed
 *        0 if function fails or the file name is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

