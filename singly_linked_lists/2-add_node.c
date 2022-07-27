#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: pointer to new head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
