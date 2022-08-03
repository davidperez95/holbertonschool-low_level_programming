#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodes = 0;
	dlistint_t *temp = NULL;

	if (!h)
		return (NULL);

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);	
}
