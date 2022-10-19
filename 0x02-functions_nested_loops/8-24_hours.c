#include "main.h"


/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 20; h++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
