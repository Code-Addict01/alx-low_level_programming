#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: string to encode
 * Return: pointer to The resulting string
 */
char *leet(char *str)
{
	int index, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[index] == letters[j])
			{
				str[index] = numbers[j];
			}
		}
	}

	return (str);
}
