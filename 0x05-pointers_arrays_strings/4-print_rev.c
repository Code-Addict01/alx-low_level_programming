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

	while (len >= 0)
	{
		if (s == NULL || *s == '\0')
			return;
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
