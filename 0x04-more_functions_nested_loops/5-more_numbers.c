#include "main.h"

/**
 * more_numbers - Print more number 10 times to 14
 *
 * Return: no return
 */

void more_numbers(void)
{
	int number, loop;

	for (loop = 1; loop <= 10; loop++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				_putchar('1');
			_putchar ( number % 10 + '0')
		}
		_putchar('\n');
	}
}
