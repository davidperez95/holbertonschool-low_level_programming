#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;
	char space = 32;
	char slash = 92;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
					_putchar(slash);
				else
					_putchar(space);
			}
			_putchar('\n');
		}
	}
}
