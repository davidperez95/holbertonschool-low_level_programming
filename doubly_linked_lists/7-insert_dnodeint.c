#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index to add the new node
 * @n: integer to pass as data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;
	size_t node = 1;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	temp = (*h)->next;

	while (temp)
	{
		if (node == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			temp->prev->next = new_node;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			new_node->next = temp;
			return (new_node);
		}
		temp = temp->next;
		node++;
	}

	if (idx == (node))
		return (add_dnodeint_end(h, n));

	return (NULL);
}
