#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - 2; j >= i;  j--)
		{
			printf(" ");
		}
		k = 0;
		for (; k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
