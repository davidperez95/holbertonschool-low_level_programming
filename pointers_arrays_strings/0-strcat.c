#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, len_2 = 0;

	while (dest[len] != '\0')
		len++;

	for (len_2 = 0; len_2 >= 0; )
	{
		dest[len] = src[len_2];
		if (src[len_2] == '\0')
			break;
		len++;
		len_2++;
	}

	return (dest);
}
