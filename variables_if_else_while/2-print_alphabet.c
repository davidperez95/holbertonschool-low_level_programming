#include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		putchar(str);
		str++;
	}
	putchar('\n');
	return (0);
}
