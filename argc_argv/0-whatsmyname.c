#include "main.h"

/**
 * main - prints its name
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 *
 */
int main(int argc __attribute__((__unused__)), char **argv)
{
	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
