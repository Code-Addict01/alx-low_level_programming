#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: destination of the copied memory area
 * @src: The memory area to copy
 * @n: number of bytes fromm src to be copied to dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
