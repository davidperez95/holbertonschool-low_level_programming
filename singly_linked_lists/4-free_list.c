#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the firsr node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
