#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		i++;

	return (i);
}
