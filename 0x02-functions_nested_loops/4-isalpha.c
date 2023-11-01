#include "main.h"

/**
 * _isalpha - Checks if character is alphabet
 * @c: character to evaluate
 * Return: 1 (c is a letter, lower or uppercase)
 *	0 (otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
