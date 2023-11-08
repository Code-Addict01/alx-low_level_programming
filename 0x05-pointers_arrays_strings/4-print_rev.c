#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to every other character in the string
 */
void print_rev(char *s)
{
	int index, len;

	for (index = 0; s[index] != '\0'; index++)
	{
		len = index;
	}

	if (len == '\0')
	{
		_putchar('\n');
	}

	while (s[len] != '\0')
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
