#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a linked list head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (EXIT_SUCCESS);

	for (nodes = 1; h->next != NULL; nodes++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (nodes);
}
