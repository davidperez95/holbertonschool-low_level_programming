#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number to seach on
 * @index: index of bit to change to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = 0;

	if (index > 63)
		return (-1);

	max = 1 << index;

	if (*n & max)
		*n ^= max;

	return (1);
}
