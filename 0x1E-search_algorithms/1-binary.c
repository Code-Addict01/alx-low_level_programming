#include "search_algos.h"

/**
 * binary_search - searches for a value in asorted array of integers
 * using binary search algorith
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 * -1 if value not present in array or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int mid, start, end, i;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)

	{
		mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);


		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			end = mid - 1;

		if (array[mid] < value)
			start = mid + 1;
	}

	return (-1);
}
