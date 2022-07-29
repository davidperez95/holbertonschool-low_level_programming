#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 *
 * Return: the index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
