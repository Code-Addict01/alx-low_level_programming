#include "variadic_functions.h"

/**
 * print_char - prints char type argument
 * @ap: va_list variable
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print integer type argument
 * @ap: va_list variable
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float type argument
 * @ap: va_list variable
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - prints string type argument
 * @ap: va_list variable
 */
void print_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j, c = 0;
	format_args t_fn[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (t_fn[j].specifier)
		{
			if (format[i] == t_fn[j].specifier)
			{
				if (c)
					printf(", ");
				t_fn[j].func_ptr(ap);
				c = 1;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
