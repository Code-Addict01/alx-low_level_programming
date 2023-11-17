#include <stdio.h>

/**
 * main - Entry point
 * @argc: Command line arguments counter
 * @argv: An arrays ofpointers to strings (arguments)
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int index;
	if (argc > 0)
	{
		index = argc - 1;
		printf("%d\n", index++);
	}
	return (0);
}
