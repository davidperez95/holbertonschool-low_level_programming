#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char **argv __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}
