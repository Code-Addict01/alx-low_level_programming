#include "main.h"

/**
 * _puts_recursion - prints string followed by new line recursively
 * @s: pointer to string to print
 */
void _puts_recursion(char *s)
{
	int index;

	index = 0;
	if (s[index] != '\0')
	{
		_putchar(s[index]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
