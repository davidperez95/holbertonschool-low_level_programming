#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search on
 * @size: size of the array
 * @value: value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return(index);
	}

	return (-1);
}
