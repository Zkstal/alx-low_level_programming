#include "main.h"
#include <stdlib.h>
/**
 * *malloc checked a function that allocates memory using malloc.
 * @b: size of mem to be allocated
 * Return:pointer to the allocated memory
 */
void *malloc_checked (unsigned int b)
{
	void *ptr;

	ptr = malloc (b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
