#include "main.h"
/**
 * print_last_digit - print last digit of value
 * @n: value to print last digit
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	n = -n;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
