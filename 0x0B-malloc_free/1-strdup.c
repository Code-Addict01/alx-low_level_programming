#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space,
 * which contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: Pointer to a space in memory
 */
char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		*(ptr + j) = *(str + j);
		j++;
	}
	*(ptr + j) = '\0';


	return (ptr);
}
