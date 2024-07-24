#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: binary.
 * Return: unsigned int equivalent of b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, bn;

	if (!b)
		return (0);

	i = 0;
	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bn = 1; len >= 0; len--, bn *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += bn;
		}
	}
	return (i);
}
