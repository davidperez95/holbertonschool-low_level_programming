#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @src: source string
 * @dest: destination string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i >= 0; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}

	return (dest);
}

/**
 * other notation
 *
 * int i;
 *
 * for (i = 0; i >= 0; i++)
 * {
 * 	*(dest + i) = *(src + i);
 * 	if (*(src + i) == '\0')
 * 		break;
 * }
 * return (dest);
 */
