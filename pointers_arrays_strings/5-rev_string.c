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

/**
 * rev_string - reverses a string, whitout printing it
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char aux, rev;

	len = _strlen(s) - 1;

	for (i = 0; i < len; )
	{
		aux = s[i];
		rev = s[len];
		s[i++] = rev;
		s[len--] = aux;
	}
}
