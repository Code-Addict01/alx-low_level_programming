#include "main.h"

/**
 * rev_string - reverses a stringg
 * @s: pointer to a string of characters
 */
void rev_string(char *s)
{
	int len, i, last;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	last = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[last];
		s[last--] = tmp;
	}
}
