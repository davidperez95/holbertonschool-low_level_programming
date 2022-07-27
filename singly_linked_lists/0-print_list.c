#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a linked list head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (EXIT_SUCCESS);

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");

		printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (i);
}
