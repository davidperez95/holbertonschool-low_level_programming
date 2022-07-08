#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *array = NULL;
	int i = 0, j = 0, k = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len += 1;

		total_len += 1;
	}

	array = malloc(sizeof(*array) * total_len + 1);

	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (k = 0, i = 0, j = 0; k < total_len; k++)
	{
		if (av[i][j] == '\0')
		{
			array[k] = '\n';
			i++;
			j = 0;
		}
		else
		{
			array[k] = av[i][j];
			j++;
		}
	}
	array[k] = '\0';

	return (array);
}
