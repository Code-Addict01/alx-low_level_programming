#include "main.h"

/**
 * _strncpy - copies n bytes of a string
 * @src: String to be copied
 * @dest: destination of copied string
 * @n: number of bytes of src to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
