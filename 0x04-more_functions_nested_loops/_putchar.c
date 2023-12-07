#include "main.h"

/**
 * _putchar - prints a single character to the console
 * @c: the character to be printed
 * Return: Character c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
