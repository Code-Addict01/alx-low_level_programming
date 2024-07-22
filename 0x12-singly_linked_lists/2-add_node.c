#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head node
 * @str: pointer to a string
 * Return: address of new node added, NULL if add failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (str)
		new_node->str = strdup(str);

	for (len = 0; new_node->str[len]; len++)
		;

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
