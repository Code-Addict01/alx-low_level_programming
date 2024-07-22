#include "lists.h"


/**
 * free_list - frees a list_t list
 * @head: pointer to a head node
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head))
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
