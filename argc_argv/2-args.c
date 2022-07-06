#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (EXIT_SUCCESS);
}
