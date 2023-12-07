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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}
		else if (!c)
			s = NULL;
	}
	return (s);
}
