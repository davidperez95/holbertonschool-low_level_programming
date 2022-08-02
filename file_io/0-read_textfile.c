#include "main.h"

/**
 * read_textfil - reads a text file and prints it to the STDOUT
 * @filename: pointer to file to read
 * @letters: number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t number_read = 0, number_write = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	number_read = read(fd, buf, letters);
	number_write = write(STDOUT_FILENO, buf, number_read);

	close(fd);

	free(buf);

	return (number_write);
}
