#include "search_algos.h"

/**
 * linear_search - searches for value in array of integers using linear search
 * @array: pointer to the first element of array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 * -1 if value is absent or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i, index;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			index = i;
			break;
		}

		if (i == size - 1)
			return (-1);
	}

	return (index);
}
