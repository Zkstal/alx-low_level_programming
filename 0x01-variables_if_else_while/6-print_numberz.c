#include <stdio.h>
/**
 * main - entry point Print all numbers to 10 with a line.
 * Return: Return 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar ('\n');
	return (0);
}
