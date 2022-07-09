#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of memory to allocate
 *
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = 0;

	ptr = malloc(sizeof(void *) * b);

	if (!ptr)
	{
		free(prt);
		exit(98);
	}
}
