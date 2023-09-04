#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if the file is openable.
 * @file_from: to take from file_from.
 * @file_to: file destination file_to.
 * @argv: arguments.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
        if (file_from == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }
        if (file_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }
}

/**
 * main - check the code.
 * @argc: number of argument.
 * @argv: arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, er_close;
	ssize_t nchar, nwrr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buf, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nwrr = write(file_to, buf, nchar);
		if (nwrr == -1)
			error_file(0, -1, argv);
	}

	er_close = close(file_from);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	er_close = close(file_to);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
