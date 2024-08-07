#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: pointer to pointer to node
 * @str: pointer to string
 * Return: address f new node, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len;
	list_t *temp;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; new_node->str[len]; len++)
		;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
