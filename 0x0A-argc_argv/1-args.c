#include <stdio.h>

/**
 * main - Entry point
 * @argc: Command line arguments counter
 * @argv: An arrays ofpointers to strings (arguments)
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	argc -= 1;

	for (i = 0; i < argc; i++)
		;
	printf("%d\n", i);

	return (0);
}
