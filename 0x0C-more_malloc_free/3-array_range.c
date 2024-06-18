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
	int *arr;
	int i, count = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		;

	count = i;

	arr = malloc(sizeof(int) * count);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
