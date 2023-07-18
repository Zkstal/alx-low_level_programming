#include "main.h"
/**
 * jack_bauer - Print minutes and hour in a day
 * Start from 00 00 to 23 59
 *
 */
void jack_bauer(void)
{
	int i, o;

	i = 0;

	while (i < 24)
	{
		o = 0;

		while (o < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
			_putchar('\n');
			o++;
		}
		i++;
	}
}
