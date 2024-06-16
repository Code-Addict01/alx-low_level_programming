#include "main.h"

/**
 * array_range - allocates memory for a range of integers
 * @min: first integer in range
 * @max: last integer in range
 * Return: pointer to the memory allocated
 * NULL on malloc fail and min > max
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		;

	arr = malloc(i * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
