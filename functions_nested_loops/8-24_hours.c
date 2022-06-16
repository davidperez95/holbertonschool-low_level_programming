#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		if (hours < 10)
			_putchar('0' + hours);
		else
			_putchar(hours);

		_putchar(':');

		for (minutes = 0; minutes < 60; minutes++)
		{
			if (minutes < 10)
				_putchar('0' + minutes);
			else
				_putchar(minutes);
		}
	}
}
