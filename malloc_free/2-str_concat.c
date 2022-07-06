#include "main.h"

/**
 * str_concat - contains the contents of s1,
 * followed by the contents of s2
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string = NULL;
	int i = 0, j = 0, len_s1 = 0, len_s2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; )
		len_s1++;

	for (len_s2 = 0; s2[len_s2] != '\0'; )
		len_s2++;

	new_string = malloc(sizeof(*new_string) * (len_s1 + len_s2 + 1));

	if (!new_string)
	{
		free(new_string);
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < len_s2; j++, i++)
		new_string[i] = s2[j];

	new_string[i] = '\0';

	return (new_string);
}
