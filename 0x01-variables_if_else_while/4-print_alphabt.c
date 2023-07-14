#include <stdio.h>
/**
 * main - Entry point Print all letter but q and e
 *Return: Returns 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	}
	putchar('\n');
	return (0);
}
