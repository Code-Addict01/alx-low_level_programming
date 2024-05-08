#include "main.h"

/**
 * argstostr - concatenates all the command line arguments of your program
 * @ac: number of arguments
 * @av: pointer to the strings(arguments)
 * Return: pointer to the new string, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, pos;
	char *str;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	i = 0;
	pos = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[pos] = *(*(av + i) + j);
			pos++;
			j++;
		}
		str[pos++] = '\n';
		i++;
	}
	str[pos] = '\0';

	return (str);
}
