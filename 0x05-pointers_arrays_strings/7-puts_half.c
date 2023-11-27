#include "main.h"

/**
 * puts_half - prints half a string followed bt a new line
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int index, n;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}

	n = index / 2;
	while (n < index)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
