#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followe by a new line
 * @str: pointer to a string
 */
void puts2(char *str)
{
	int index, mod;

	index = 0;
	while (str[index] != '\0')
	{
		mod = str[index] % 2;
		if (!(mod != 0))
			_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
