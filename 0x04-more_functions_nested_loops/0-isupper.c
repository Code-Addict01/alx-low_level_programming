#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to evaluate
 * Return: 1(c is uppercase) 0(otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
