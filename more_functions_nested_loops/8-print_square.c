#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;
	char numeral = 35;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar(numeral);

			_putchar('\n');
		}
	}
}
