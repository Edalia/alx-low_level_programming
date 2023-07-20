#include "main.h"
#include <stdio.h>
/**
*print_diagonal - draw diagonal line
*@n: parameter to determine number of lines
*Return: void
*/

void print_diagonal(int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			printf("i");
			_putchar('\n');
			i++;
		}
		
		_putchar('\n');
	}
}
