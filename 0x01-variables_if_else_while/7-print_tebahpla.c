#include <stdio.h>
/**
 *  main - entry point Print the alphabet in reverse.
 * Return: Return 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
