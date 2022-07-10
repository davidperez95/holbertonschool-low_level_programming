#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of lements to the array
 * @size: size of the elements (char, int, float, etc)
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array  = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
