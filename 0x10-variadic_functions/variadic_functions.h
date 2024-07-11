#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_function_t - holds argument format specifier &
 * pointer to functions for printing certain formats
 * @specifier: format specifier
 * @func_ptr: pointer to function printing a specific type of argument
 */
typedef struct format_function_t
{
	char specifier;
	void (*func_ptr)(va_list);
} format_args;

#endif /*VARIADIC_FUNCTIONS_H*/
