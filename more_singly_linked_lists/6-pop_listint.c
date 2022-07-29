#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node = NULL;
	size_t data = 0;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;

	return (data);
}
