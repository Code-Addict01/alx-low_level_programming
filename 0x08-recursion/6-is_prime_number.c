#include "main.h"

/**
 * divisibility_test - Checks if n is divisible by any other number but itself
 * @n: Number to be evaluated
 * @x: Number dividing n
 * Return: 1 of n not divisible by any other number but itself, 0 otherwise
 */
int divisibility_test(int n, int x)
{
	if (n % x == 0)
	{
		if (x == n)
			return (1);
		else
			return (0);
	}
	else
		return (divisibility_test(n, x + 1));
}

/**
 * is_prime_number - Checks if n is a prime number
 * @n: Number to be evaluated
 * Return: 1 for n is prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (divisibility_test(n, 2));
}
