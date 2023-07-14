#include <stdio.h>
/**
 * main - entry point Print all single digit numbers.
 * Return: Always returns 0 (Success)
 */
int main(void)
{

	int number;
	
	for (number = 0; number <= 9; number++)
	{
	printf("%d", number);
	}
	putchar('\n');
	return (0);
}
