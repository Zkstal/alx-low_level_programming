#include <stdio.h>
/**
 * main - Print base 16 digits.
 * Return: Return 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0' ; digit <= '9' ; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a' ; digit <= 'f' ; digit++)
	{
	putchar(digit);
	}
	putchar('\n');
	return (0);
}
