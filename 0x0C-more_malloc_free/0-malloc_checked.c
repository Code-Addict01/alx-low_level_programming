#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes of memory to be allocated
 * Return: pointer to allocated memory block on malloc success
 *	exit 98
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x != NULL)
		return (x);

	exit (98);
}	
