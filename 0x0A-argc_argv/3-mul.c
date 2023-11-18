#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: Arguments counter
 * @argv: Arrays of pointers to strings(Arguments)
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc > 0)
	{
		if (!(argc == 3))
		{
			printf("Error\n");
			return (1);
		}

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	return (0);
}
