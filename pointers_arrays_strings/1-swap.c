#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer one
 * @b: integer two
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *altern = a;

	*a = b;
	*altern = b;
}
