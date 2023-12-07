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

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;

	if (*(s + i) == c)
		return (s + i);
	else
		return (NULL);
}
