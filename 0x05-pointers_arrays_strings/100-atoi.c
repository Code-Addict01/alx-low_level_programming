#include "main.h"

/**
 * _atoi - conver a string into an integer
 * @s: pointer to the string
 * Return: 0(no numbers in the string)
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
