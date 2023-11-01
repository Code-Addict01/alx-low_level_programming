#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be evaluated
 * Return: 1 and print + for n > 0
 *	0 and print 0 for n == 0
 *	-1 and print - for n < 0
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (i == 0)
		_putchar('0');
	return (0);
}
