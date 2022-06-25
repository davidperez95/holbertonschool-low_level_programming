#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(len);

	len -= 1;

	for (; s[len]; )
	{
		_putchar(s[len]);
		len--;
	}
}
