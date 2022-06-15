#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char str;

	for (str = 122; str >= 97; str--)
		putchar(str);

	putchar('\n');
	return (0);
}
