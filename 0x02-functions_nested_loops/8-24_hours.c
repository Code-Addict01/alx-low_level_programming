#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = '0';
	while (i <= '2')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '5')
			{
				l = '0';
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');

					if (i == '2' && j == '3' && k == '5' && l == '9')
						return; /*Exit the function at 23:59*/
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
