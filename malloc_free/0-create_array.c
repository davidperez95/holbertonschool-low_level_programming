#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character to init the array
 *
 * Return: pointer to the new allocate array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *new_array = NULL;

	if (size == 0)
		return (NULL);

	new_array = malloc(sizeof(*new_array) * size);
	if (!new_array)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = c;

	return (new_array);
}
