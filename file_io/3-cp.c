#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_from = 0, file_to = 0, safe_close = 0;
	ssize_t number_chars = 0, number_write = 0;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, argv);

	number_chars = 1024;
	while (number_chars == 1024)
	{
		number_chars = read(file_from, buff, 1024);
		if (number_chars == -1)
			check_error(-1, 0, argv);

		number_write = write(file_to, buff, number_chars);
		if (number_write == -1)
			check_error(0, -1, argv);
	}

	safe_close = close(file_from);
	if (safe_close == -1)
		print_error(safe_close);

	safe_close = close(file_to);
	if (safe_close == -1)
		print_error(safe_close);

	return (0);
}

/**
 * print_error - checks for the file close
 * @file: file to check
 * Return: void
 */
void print_error(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
 * check_error - checks if file_from or file_to fails
 * @file_from: file to check
 * @file_to: file to check
 * @argv: arguments vector
 * Return: void
 */
void check_error(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
