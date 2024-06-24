#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with malloc
 * @new_size: size in bytes of new mwmory block
 * @old_size: size in bytes of old memory block ptr
 * Return: NULL if reallocation fails
 * pointer to new memory block created
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, copy_size;

	if (new_size == old_size)
	{
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		return (NULL);
	}

	copy_size = (new_size > old_size) ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
