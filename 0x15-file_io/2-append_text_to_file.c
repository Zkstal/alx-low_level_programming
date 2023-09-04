#include "main.h"

/**
 * append_text_to_file - appends text in the end of a file
 * @filename: name of the file.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. else -1 if the file does not exist
 * or in case of fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		rwr = write(fd, text_content, nl);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
