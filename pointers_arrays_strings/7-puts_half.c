#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i = 0, half = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
