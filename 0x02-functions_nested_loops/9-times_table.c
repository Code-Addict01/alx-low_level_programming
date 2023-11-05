#include "main.h"

/**
 * times_table - prints the  times table, starting with 0.
 */
void times_table(void)
{
	int i, j, product;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar(product + '0');
			}

			if (product <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
