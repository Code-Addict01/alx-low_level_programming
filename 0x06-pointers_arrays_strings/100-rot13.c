#include "main.h"

/**
 * rot13 - encrypts a string using rot13
 * @str: String to encrypt
 * Return: pointer to encrypted string
 */
char *rot13(char *str)
{
	int index, j;

	char input[] = "abcdefghijklmABCDEFGHIJKLM";
	char output[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[index] == input[j])
			{
				str[index] = output[j];
			} else if (str[index] == output[j])
			{
				str[index] = input[j];
			}
		}
	}
	return (str);
}
