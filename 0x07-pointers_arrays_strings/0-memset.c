#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to memory area
 * @b: The byte to fill at the memory area
 * @n: the first n bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
