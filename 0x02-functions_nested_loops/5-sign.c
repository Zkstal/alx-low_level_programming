#include "main.h"
/**
 * print_sign - Check number and add a sign corresponding to the number
 * @n: The number to check to add sign
 *
 *Return: 1 if positive 0 if it zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

