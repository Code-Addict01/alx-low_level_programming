#include "main.h"

/**
 * _strchr - locates a character ina string
 * @s: pointer to the string to evaluate
 * @c: the character to search
 *
 * Return: Pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		else if (!c)
			ptr = NULL;
	}

	return (ptr);
}
