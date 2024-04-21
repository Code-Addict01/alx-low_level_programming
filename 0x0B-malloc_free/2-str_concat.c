#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 * Return: Pointer to newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, l, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	k = i + j;

	ptr = (char *)malloc(k * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (l = 0, m = 0; l < (i + j + 1); l++)
	{
		if (l < i)
			ptr[l] = s1[l];
		else
			ptr[l] = s2[m++];
	}

	return (ptr);
}
