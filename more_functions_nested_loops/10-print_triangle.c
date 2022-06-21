#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int dif = size - 1;
	char numeral = 35;
	char space = 32;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < dif)
					_putchar(space);
				else
					_putchar(numeral);
			}

			dif--;
			_putchar('\n');
		}
	}
}
