#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: String one
 * @s2: String two
 * @n: bytes of string two to be used in concatenation
 * Return: pointer to memory allocated for concatenated string
 * NULL on malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, lout, i, j;
	char *str;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n >= l2)
		n = l2;

	lout = l1 + n;

	str = malloc(sizeof(char) * (lout + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i + j] = s2[j];

	str[lout] = '\0';

	return (str);
}
