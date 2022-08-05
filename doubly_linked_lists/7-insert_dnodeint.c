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
	dlistint_t *temp = *h, *new_node = NULL;
	size_t node = 0;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;

		while (node < (idx - 1))
		{
			temp = temp->next;
			if (temp->next == NULL)
				return (NULL);
			node++;
		}

		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
		new_node->next->prev = new_node;
	}
	return (new_node);
}
