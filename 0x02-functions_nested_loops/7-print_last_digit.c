#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number whose last digit we want
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
		last = -last;

	_putchar('0' + last);

	return (last);
}
