#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: where src will be appended
 * @src: the string to append
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
