#include "main.h"

/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes to allocate
 * Return: pointer to the allocated memory.
 * If malloc fails, program exits with value 98.
 */
void *malloc_checked(unsigned int b)
{
	void *block;
	
	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
