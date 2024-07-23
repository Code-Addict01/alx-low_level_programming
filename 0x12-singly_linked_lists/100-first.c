#include "lists.h"

void print_b4_main(void) __attribute__((constructor));

/**
 * printf_b4_main - prints a sentence before the main function is executed
 */
void print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
