#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: min integer
 * @max: max integer
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array = 0;
	int i = 0, total = 0;

	if (min > max)
		return (NULL);

	total = max - min;

	array = malloc(sizeof(*array) * (total + 1));

	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i <= max; i++, min++)
		array[i] = min;

	return (array);
}
