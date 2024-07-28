#include "main.h"

/**
 * main - computes and prints sum of all natural
 * numbers below 1024 that are multiples of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum3, sum5, sum15, t_sum;
	sum3 = 0, sum5 = 0, sum15 = 0;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0)
			sum3 += i;

		if (i % 5 == 0)
			sum5 += i;

		if (i % 15 == 0)
			sum15 += i;
	}
	t_sum = sum3 + sum5 - sum15;
	printf("%d\n", t_sum);

	return (0);
}
