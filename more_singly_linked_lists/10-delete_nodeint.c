#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: double pointer to the head of the list
 * @index: index of the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL, *node = NULL;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
			temp = temp->next;
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
		return (EXIT_FALIURE);

	node = temp->next;

	if (index != 0)
	{
		temp->next = node->next;
		free(node);
	}
	else
	{
		free(temp);
		*head = node;
	}

	return (EXIT_SUCCESS);
}
