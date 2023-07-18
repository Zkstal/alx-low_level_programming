#include "main.h"
/**
 * print_last_digit - print last digit of value
 * @n: value to print last digit
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar(last_digit);
	return (0);
}
