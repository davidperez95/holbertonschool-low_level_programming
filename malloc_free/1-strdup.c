#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to a copy of str
 */
char *_strdup(char *str)
{
	char *copy = NULL;
	int i = 0, len = 0;

	if (!*str)
		return (NULL);

	for (len = 0; str[len] != '\0'; )
		len++;

	copy = malloc(sizeof(*copy) * len + 1);

	if (!copy)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}
