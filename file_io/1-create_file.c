#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, number_write = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	number_write = write(fd, text_content, len);
	if (number_write == -1)
		return (-1);

	close(fd);

	return (1);
}
