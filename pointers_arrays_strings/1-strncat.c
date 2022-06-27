#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string to concatenate
 * @src: source string
 * @n: number of bytes to concatenate from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len_2 = 0;

	while (dest[len] != '\0')
		len++;

	for (len_2 = 0; len_2 <= n - 1; )
	{
		dest[len] = src[len_2];
		if (src[len_2] == '\0')
			break;
		len++;
		len_2++;
	}

	return (dest);
}

