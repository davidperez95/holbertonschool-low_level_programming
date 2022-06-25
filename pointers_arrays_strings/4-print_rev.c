#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; )
		len++;

	len -= 1;

	for (; s[len]; )
	{
		_putchar(s[len]);
		len--;
	}
}
