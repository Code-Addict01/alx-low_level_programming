#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followe by a new line
 * @str: pointer to a string
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(*(str + index));
		index++;
		index++;
	}
	_putchar('\n');
}
