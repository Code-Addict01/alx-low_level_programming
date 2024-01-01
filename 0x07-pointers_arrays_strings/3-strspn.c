#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The main string
 * @accept: other string
 * Return: Number of bytes in initial segment of s
 * which only consists of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);
}
