#include <stdio.h>

/**
 * main - Entry point
 * @argc: Arguments counter
 * @argv: Array of pointers to the strings(arguments)
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc > 0)
	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}
	return (0);
}
