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
	char a = 'a';
	int i = 0;

	while (i <= 3)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		putchar('\n');
		i++;
	}

}
