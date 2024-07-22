#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a node structure of type list_t
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;

		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodes);
}
