#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: number to pass as data
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = *head;

	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);

	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
