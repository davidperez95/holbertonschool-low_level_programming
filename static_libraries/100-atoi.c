#include "main.h"

/**
 * _atoi - convert str into integer
 * @s: string to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int n = 0, sign = 1, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i])
	{
		n = n * 10 + s[i] - '0';
		i++;
	}
	
	return (sign * n);
}
