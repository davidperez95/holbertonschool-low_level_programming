#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to search on
 * @size: size of the array
 * @value: value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t half = 0, left = 0, right = size - 1;
	size_t i = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < size; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}

		half = (left + right) / 2;

		if (array[half] < value)
			left = half + 1;
		else if (array[half] > value)
			right = half - 1;
		else
			return (half);
	}

	return (-1);
}
