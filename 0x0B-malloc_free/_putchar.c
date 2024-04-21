#include "main.h"

/**
 * _putchar - returns a single character to the screen
 * @c: character to be printed
 * Return: Character c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
