#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if the file is openable.
 * @from_file: to take from from_file.
 * @file_to: file destination file_to.
 * @argv: arguments.
 * Return: no return.
 */
void error_file(int from_file, int file_to, char *argv[])
{
	if (from_file == -1)
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
	int from_file, file_to, er_close;
	ssize_t nchar, nwrr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from_file = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from_file, file_to, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(from_file, buf, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nwrr = write(file_to, buf, nchar);
		if (nwrr == -1)
			error_file(0, -1, argv);
	}

	er_close = close(from_file);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}

	er_close = close(file_to);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	return (0);
}
