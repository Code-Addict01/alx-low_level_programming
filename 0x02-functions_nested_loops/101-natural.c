#include "main.h"

/**
 * main - computes and prints sum of all natural
 * numbers below 1024 that are multiples of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum3, sum5, t_sum;
	sum3 = sum5 = 0;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3)
			sum3 += i;
		else if (i % 5)
			sum5 += i;
	}
	t_sum = sum3 + sum5;
	printf("%d\n", t_sum);

	return (0);
}
