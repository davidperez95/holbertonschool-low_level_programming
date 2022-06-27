#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to print
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	_putchar('\n');
}
