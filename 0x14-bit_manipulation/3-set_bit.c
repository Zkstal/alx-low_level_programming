#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n: point to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, else -1 a for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

