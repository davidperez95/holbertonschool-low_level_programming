#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: the total sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	size_t sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
