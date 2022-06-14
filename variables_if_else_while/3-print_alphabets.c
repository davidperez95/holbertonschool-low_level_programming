#include <stdio.h>
/**
 * main - print alphabet in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	char lower = 97;
	char upper = 65;

	while (lower <= 122)
	{
	       putchar(lower);
	       lower++;
	}

	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
