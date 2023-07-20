#include "main.h"
/**
 *jack_bauer - print 24hr times
 *
 *Return: void
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int m = 0;

		while (m < 60)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));

			_putchar('\n');
			m++;
		}
		i++;
	}
}
