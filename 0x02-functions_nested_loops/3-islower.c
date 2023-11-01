#include "main.h"

/**
 * _islower - checks if character is lowercase alphabet
 * @c: character to be evaluated
 * Return: 1 (c is lowercase) 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
