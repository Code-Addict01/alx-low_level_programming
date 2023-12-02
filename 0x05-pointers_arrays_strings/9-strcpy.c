#include "main.h"

/**
 * _strcpy - copies a string pointed to by src,
 * including the null byte to the buffer pointed to by dest
 * @dest: pointer to buffer(src destination)
 * @src: pointer to the string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, index;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (index = 0; index < len; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
