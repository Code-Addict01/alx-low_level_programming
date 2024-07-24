#include "main.h"

/**
 * clear_bit - Sets value of a bit to 0 at given index
 * @n: pointer to unsigned lng int
 * @index: index of a bit
 * Return: 1 if it worked, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
