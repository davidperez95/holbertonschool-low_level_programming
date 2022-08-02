#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number to search on
 * @index: index of bit to change to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = 0;

	if (index > 63)
		return (-1);

	max = 1 << index;
	*n = (*n | max);

	return (1);
}
