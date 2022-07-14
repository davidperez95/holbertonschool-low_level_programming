#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search on
 * @size: size of the array
 * @cmp: function pointer to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}

	return (-1);
}
