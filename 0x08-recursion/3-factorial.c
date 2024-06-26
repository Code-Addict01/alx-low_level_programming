#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number who's factorial we want
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
