#include "main.h"

/**
 * main - prints all fibonacci numbers less than 4000000
 * that are even
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1, num2, next;
	unsigned long int sum, max = 4000000;

	num1 = 1;
	num2 = 2;
	sum = num2;
	for (;;)
	{
		next = num1 + num2;
		if (next >= max)
			break;
		if (next % 2 == 0)
			sum += next;

		num1 = num2;
		num2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
