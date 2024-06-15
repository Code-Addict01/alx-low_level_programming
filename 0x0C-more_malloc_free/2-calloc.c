#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size of each member
 * Return: pointer to allocated memory
 * NULL if nmemb or size is 0, if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}
