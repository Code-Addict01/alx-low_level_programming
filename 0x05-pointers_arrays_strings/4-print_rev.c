#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to every other character in the string
 */
void print_rev(char *s)
{
	int index, len;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}

	len = index - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
