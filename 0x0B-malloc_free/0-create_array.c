#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars,
 * and initializes it with a specific character
 * @size: size of the array(number of character)
 * @c: the character to initialize the array
 * Return: Pointer to the memory created by malloc()
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size != 0)
		ptr = (char *)malloc(size * sizeof(char));
	else
		return (NULL);

	if (ptr == NULL)
		return (0);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
