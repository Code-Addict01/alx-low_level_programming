#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Arguments counter
 * @argv: Array of pointers to the strings(arguments)
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int element, coins = 0, amt;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);

	if (amt < 0)
	{
		printf("0\n");
	}

	for (element = 0; element < 5; element++)
	{
		coins += amt / values[element];
		amt %= values[element];
	}

	printf("%d\n", coins);

	return (0);
}
