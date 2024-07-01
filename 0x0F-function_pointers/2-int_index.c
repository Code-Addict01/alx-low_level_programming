#include "function_pointers.h"

/**
 * int_index - searches for and integer
 * @array: pointer to array with number being searched
 * @size: size of the array
 * @cmp: pointer to function that compares a numbers
 * Return: index of first element for which cmp does not return 0.
 * -1  if size <= 0 and no element matches integer been searched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
