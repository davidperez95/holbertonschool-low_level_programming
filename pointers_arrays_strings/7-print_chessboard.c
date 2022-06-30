#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; i++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
