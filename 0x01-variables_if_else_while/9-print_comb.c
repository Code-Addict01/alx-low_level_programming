#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');

	return (0);
}
