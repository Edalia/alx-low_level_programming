#include "main.h"

/**
 *print_alphabet - prints a-z
 *
 *Return (void)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
