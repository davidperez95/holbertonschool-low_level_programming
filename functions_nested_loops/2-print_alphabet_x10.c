#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char str = 97;
	int i = 0;

	for (i = 0; i <= 9; i++)
		for (str = 97; str <= 122; str++)
			_putchar(str);

	_putchar('\n');
}
