#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: String one
 * @s2: String two
 * @n: number of bytes of string two to be concatenated with s1
 * Return: pointer to newly allocate memory space
 *	NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (n >= j)
		n = j;

	len = i + n;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	for (j = 0; j < n; j++)
		ptr[k + j] = s2[j];

	ptr[k + j] = '\0';


	return (ptr);
}
