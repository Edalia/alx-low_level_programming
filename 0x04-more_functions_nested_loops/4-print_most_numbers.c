#include "main.h"
/**
*print_most_numbers - print 0 - 9 without 2 and 4
*
*Return: void
*/

void print_most_numbers(void)
{
	int i;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);

		i++;
	}
	_putchar('\n');
}
