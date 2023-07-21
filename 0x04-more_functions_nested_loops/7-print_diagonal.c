#include "main.h"
#include <stdio.h>
/**
*print_diagonal - draw diagonal line
*@n: parameter to determine number of lines
*Return: void
*/

void print_diagonal(int n)
{
	int i, t;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		t = 1;

		while (t <= n)
		{
			_putchar(' ');
			t++;
		}

		while (i <= n)
		{
			_putchar('\\');
			i++;
		}

		_putchar('\n');

	}
}
