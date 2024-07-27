#include "main.h"

/**
 * print_to_98 - prints all natural numbers from a given number
 * to 98
 * @n: the given number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
	else if (n > 98)
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
	else
		printf("%d\n", n);
}
