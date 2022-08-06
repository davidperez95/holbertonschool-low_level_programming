#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	size_t node = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		temp = *head;
		while (index != node)
		{
			temp = temp->next;
			node++;
		}
		if (!temp)
			return (-1);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*head = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
