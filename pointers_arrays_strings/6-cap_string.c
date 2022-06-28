#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char separatos[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == separatos[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] -= 32;
				break;
			}
		}
	}
	return (str);
}
