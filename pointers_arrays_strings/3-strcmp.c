#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 if equal or difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	if (*s1 == '\0' && *s2 == '\0')
		return (0);

	if (s1[0] != s2[0])
	{
		comp = s1[0] - s2[0];
		return (comp);
	}
	else
		return (0);
}
