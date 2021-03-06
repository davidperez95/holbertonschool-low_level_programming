#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	for ( ; s[i] != '\0'; )
		i++;

	return (i);
}
