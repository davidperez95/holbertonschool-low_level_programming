#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to encode
 *
 * Return: pointer to str
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char letters[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char numbers[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
		}
	}

	return (str);
}
