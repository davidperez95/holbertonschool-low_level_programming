#include <stdio.h>
/**
 * main - print alphabet in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	char str = 'a';

	for (str = 'a'; str <= 'z'; str++)
		putchar(str);
	for (str = 'A'; str <= 'Z'; str++)
		putchar(str);

	putchar('\n');

	return (0);
}
