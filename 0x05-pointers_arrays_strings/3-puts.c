#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: pointer to a string of characters
 */
void _puts(char *str)
{
	int index;

	index = 0;
	for (; str[index] != '\0'; index++)
	{
		/*print the character at every index until the null byte is encountered*/
		_putchar(*(str + index));
	}
	_putchar('\n');
}
