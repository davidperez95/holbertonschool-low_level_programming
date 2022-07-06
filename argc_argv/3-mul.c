#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0, mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mult *= atoi(argv[i]);

		printf("%d\n", mult);
		return (EXIT_SUCCESS);
	}

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
}


