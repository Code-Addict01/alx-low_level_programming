#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: size of the times table
 */
void print_times_table(int n)
{
	int i, multiplier, product = 0;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			product = i * multiplier;

			if (multiplier > 0 && product < 10)
				printf("   ");
			else if (product > 9 && product < 100)
				printf("  ");
			else if (product > 99)
				printf(" ");

			printf("%d", product);
			if (multiplier == n)
				printf("\n");
			else
				printf(",");
		}
	}
}
