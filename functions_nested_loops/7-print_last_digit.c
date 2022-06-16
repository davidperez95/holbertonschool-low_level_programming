#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to check
 *
 * Return: the last number
 */
int print_last_digit(int n)
{
	int number;

	if (n < 0)
		number = -1 * (n % 10);
	else
		number = n % 10;

	_putchar((number % 10) + '0');
	return (number % 10);
}
