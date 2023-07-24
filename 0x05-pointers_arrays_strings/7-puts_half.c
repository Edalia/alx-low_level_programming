#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int len = (strlen(str) - 1);

	if (len % 2 == 0)
	{
		while ((len / 2) > len)
		{
			_putchar(str((len / 2)));
			(len / 2)++;
		}
	}
	else
	{
		while ( ((len + 1) / 2) > len)
		{
			_putchar(str(((len + 1) / 2)));
			((len + 1) / 2)++;
		}
	}

	_putchar('\n');
}
