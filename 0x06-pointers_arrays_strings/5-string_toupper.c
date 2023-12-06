#include "main.h"

/**
 * string_toupper - changes all lowercase characters of a string
 * to upper case
 * @str: pointer to string to evaluate
 * Return: pointer to the new string
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
