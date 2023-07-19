#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - function
 *
 *Description: print a-z 10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
