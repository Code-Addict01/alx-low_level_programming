#include "function_pointers.h"

/**
 * array_iterator - iterates over members of an array
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to the function used to print members of the array
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	int element;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			element = array[i];
			action(element);
		}
	}
}
