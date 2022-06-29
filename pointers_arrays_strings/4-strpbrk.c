#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to seach in
 * @accept: bytes to search for
 *
 * Return: pointer to the byte in s or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
			else
				return (NULL);
		}
	}
}
