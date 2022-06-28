#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux[n];

	for (i = 0; i < n; i++)
		aux[n - i - 1] = a[i];

	for (i = 0; i < n; i++)
		a[i] = aux[i];

}
