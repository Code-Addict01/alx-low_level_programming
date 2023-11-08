#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to every other character in a string
 * Return: string length
 */
int _strlen(char *s)
{
	int index;

	index = 0;
	while (*(s + index) != '\0')
	{
		index++;
	}
	return (index);
}
