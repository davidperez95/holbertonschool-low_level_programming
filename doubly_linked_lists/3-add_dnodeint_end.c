#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to pass as data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if ((*head) == NULL)
		(*head) = new_node;
	else
	{
		temp = (*head);
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
