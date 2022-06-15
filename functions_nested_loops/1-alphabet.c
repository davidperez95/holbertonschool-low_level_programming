#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char str = 97;

	for (str = 97; str <= 122; str++)
		_putchar(str);

	_putchar('\n');
}
