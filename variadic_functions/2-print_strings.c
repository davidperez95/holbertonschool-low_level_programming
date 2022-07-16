#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string = NULL;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
