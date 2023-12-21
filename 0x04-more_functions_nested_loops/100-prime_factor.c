#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int n = 612852475143;

	i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
		i++;
	}
	printf("%d\n", i);

	return (0);
}
