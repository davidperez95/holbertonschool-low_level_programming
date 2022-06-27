#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
