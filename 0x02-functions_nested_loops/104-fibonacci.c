#include "main.h"

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1, num2, next;
	int i;

	num1 = 1;
	num2 = 2;
	printf("%lu, %lu, ", num1, num2);
	for (i = 3; i <= 98; i++)
	{
		next = num1 + num2;
		printf("%lu", next);
		if (i < 98)
			printf(", ");
		else
			printf("\n");

		num1 = num2;
		num2 = next;
	}
	return (0);
}
