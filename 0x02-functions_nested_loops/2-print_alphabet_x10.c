#include "main.h"
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
	int i = 1;

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		i++;
		_putchar('\n');

	}

}
