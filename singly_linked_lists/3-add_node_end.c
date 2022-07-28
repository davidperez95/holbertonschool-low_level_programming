#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head struct
 * @str: string to add as node
 *
 * Return: pointer to new element of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *temp = NULL;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[length])
		length++;

	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}
	return (new_node);
}
