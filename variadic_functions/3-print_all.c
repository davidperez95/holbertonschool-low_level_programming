#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: all types of arguments
 *
 * Return: print the format passed as an argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *string = NULL;
	int i = 0;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
