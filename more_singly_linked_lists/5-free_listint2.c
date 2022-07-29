#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to he head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;

	temp = *head;

	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
