#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of memory to allocate
 *
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}
