#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes to allocate.
 *
 * Return: points to the allocated memory.
 * if malloc fails, value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
