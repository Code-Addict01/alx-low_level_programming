#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = size - 2; j >= i;  j--)
		{
			_putchar(' ');
		}
		k = 0;
		for (; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
