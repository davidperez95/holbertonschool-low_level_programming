#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: Pointer to the head of the linked list
 *
 * Return: The total amount of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (EXIT_SUCCESS);

	for (nodes = 1; h->next != NULL; nodes++)
		h = h->next;

	return (nodes);
}
