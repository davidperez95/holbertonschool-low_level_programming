#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: two dimensional array
 * @size: size of the array
 *
 * Return: the sum of the two diagonals
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < max; i += size + 1)
		sum_1 += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sum_2 += a[i];

	printf("%d, %d\n", sum_1, sum_2);
}
