#include "main.h"

/**
 * read_textfile - reads a text and prints letters
 * @filename: the name of the file
 * @letters: number of letters printed.
 *
 * Return: number of letters printed. if it fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fw;
	ssize_t nr, nwr;
	char *buf;

	if (!filename)
		return (0);

	fw = open(filename, O_RDONLY);

	if (fw == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(fw, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nr);

	close(fw);

	free(buf);

	return (nwr);
}
