#include "main.h"

void times_table(void)
{	
	int r = 0;
	while (r < 10)
	{
		int c = 0;
		while (c < 10){
			int s = r*c;
				if (s > 9)
					_putchar('0' + (s / 10));
			_putchar('0' + (s % 10));
			_putchar(',');

			if (c < 9)
				_putchar(' ');
			c++;
		}
		_putchar('\n');
		r++;
	}
	_putchar('\n');
}
