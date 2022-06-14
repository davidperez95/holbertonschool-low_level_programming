#include <stdio.h>
/**
 * main - print alphabet without e and q
 *
 * Return: 0
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		if (str == 'e' || str == 'q')
			continue;
		else
			putchar(str);
	putchar('\n');

	return (0);
}
