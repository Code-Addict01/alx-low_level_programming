#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Arguments counter
 * @argv: Array of pointers to strings(arguments)
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int str, index, sum = 0;

	for (str = 1; str < argc; str++)
	{
		for (index = 0; argv[str][index] != '\0'; index++)
		{
			if (!isdigit(argv[str][index]))
			{
				printf("Error\n");
				return (1);
			}
			else if (argc == 1)
			{
				printf("0\n");
			}
		}
		sum += atoi(argv[str]);
	}
	printf("%d\n", sum);
	return (0);
}
