#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to be printed
 * @f: pointer to function that takes one parameter and returns nothing
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f || name)
	{
		f(name);
	}
}
