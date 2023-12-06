#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n: number of bytes of src
 * @src: string to be copied
 * @dest: Where to append the src string
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
