#include <stdio.h>
/**
 * main - entry point Print combination of single digit.
 * Return: Return 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	if (number != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
