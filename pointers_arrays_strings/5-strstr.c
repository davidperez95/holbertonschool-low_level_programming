#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to search for
 * @needle: string to find in haystack
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *aux = haystack, *start_needle = needle;

	for (; *haystack; )
	{
		aux = haystack;
		needle = start_needle;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (aux);

		haystack = aux + 1;
	}

	return (NULL);
}
