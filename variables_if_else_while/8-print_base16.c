#include <stdio.h>
/**
 * main - print numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char str;

	for (num = 48; num <= 57; num++)
		putchar(num);

	for (str = 97; str <= 102; str++)
		putchar(str);

	putchar('\n');

	return (0);
}
