#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function corresponding
 * to the operator given as parameter
 * @s: operator passed as argument to the program
 * Return: pointer to function corresponding to operator s
 * NULL if s matches non of the 5 expected operators (+, -, *, /, %)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
