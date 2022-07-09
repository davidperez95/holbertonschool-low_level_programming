#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	if (*s == '\0')
		return (0);

	for ( ; s[i] != '\0'; )
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string = NULL;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
	{
		new_string = malloc(sizeof(*new_string) * (_strlen(s1) + _strlen(s2) + 1));
		if (!new_string)
		{
			free(new_string);
			return (NULL);
		}
		for (i = 0; s1[i] != '\0'; i++)
			new_string[i] = s1[i];

		for (j = 0; s2[j] != '\0'; j++, i++)
			new_string[i] = s2[j];
		new_string[i] = '\0';
		return (new_string);
	}
	if (n < _strlen(s2))
	{
		new_string = malloc(sizeof(*new_string) * (_strlen(s1) + n + 1));
		if (!new_string)
		{
			free(new_string);
			return (NULL);
		}

		for (i = 0; s1[i] != '\0'; i++)
			new_string[i] = s1[i];

		for (j = 0; j < n; j++, i++)
			new_string[i] = s2[j];
		new_string[i] = '\0';
		return (new_string);
	}
}
