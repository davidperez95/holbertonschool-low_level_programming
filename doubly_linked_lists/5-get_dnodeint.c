#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index to find on the list
 * Return: the node on index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t node = 0;

	if (index == 0)
		return (temp);

	while (node < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		node++;
	}
	return (temp);
}
