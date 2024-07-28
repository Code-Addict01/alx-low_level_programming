#include "main.h"

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int num1, num2, next;

	num1 = 1;
	num2 = 2;
	printf("%lu, %lu, ", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		next = num1 + num2;
		printf("%lu", next);
		if (i < 50)
			printf(", ");
		else
			printf("\n");
		num1 = num2;
		num2 = next;
	}
	return (0);
}
