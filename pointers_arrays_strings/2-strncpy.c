#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string to copy
 * @src: source string to copy
 * @n: bytes of src to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
