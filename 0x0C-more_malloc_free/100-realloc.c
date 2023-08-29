#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block.
 * @ptr: points to the previous memory allocated.
 * @old_size: size, in bytes of the allocated space ptr.
 * @new_size: size, in bytes of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr.
 * if malloc fails return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
