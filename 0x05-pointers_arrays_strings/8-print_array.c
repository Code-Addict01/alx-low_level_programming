#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
