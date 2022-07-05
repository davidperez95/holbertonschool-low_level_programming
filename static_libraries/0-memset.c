#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to s, to fill with memory
 * @b: byte to fill with
 * @n: number of bytes to fill in s
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
