#include "lists.h"

/**
 * list_len - returns number of elements(nodes) in linked list_t list
 * @h: pointer to a node structure of type list_t
 * Return: Number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	for (; h;)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
