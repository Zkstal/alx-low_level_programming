#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the name of file.
 *
 * Return: For success 1, else if function fails or file is NULL -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, c, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	c = write(i, text_content, len);

	if (i == -1 || c == -1)
		return (-1);

	close(i);

	return (1);
}

