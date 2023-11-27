#include "main.h"

/**
 * puts_half - prints halft the string, followed by a new line
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int index, n;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}

	if (index % 2 == 0)
	{
		n = index / 2;
		while (n < index)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else if (index % 2 != 0)
	{
		n = (index - 1) / 2;
		while (n < index)
		{
			_putchar(str[n]);
			n++;
		}

	}
	_putchar('\n');
}
