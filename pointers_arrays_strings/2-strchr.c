#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to search for c
 * @c: character to search
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}
