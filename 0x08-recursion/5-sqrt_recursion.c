#include "main.h"

/**
 * check_natural_square - Checks if a number has natural square
 * implying it has a natural squareroot
 * @n: Number to evaluate
 * @x: Divides n to see if result multiplied by x gives n
 * Return: x if n has natural square where x is the squareroot
 *	-1 if no natural square
 */
int check_natural_square(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	else
		return (0 + check_natural_square(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number whose square root we want
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (check_natural_square(n, 2));
}
