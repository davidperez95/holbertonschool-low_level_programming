#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of the list
 * @idx: index to add the node
 * @n: number to pass as data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			h = h->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
