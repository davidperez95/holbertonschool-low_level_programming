#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: add
 */
int main(int argc, char **argv)
{
	int i = 0, j = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
