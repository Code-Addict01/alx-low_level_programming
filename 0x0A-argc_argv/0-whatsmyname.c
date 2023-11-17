#include <stdio.h>

/**
 * main  - check the code
 * @argc: Arguments counter
 * @argv: Array of pointers to the strings(arguments)
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
