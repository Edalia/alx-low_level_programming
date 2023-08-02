#include "main.h"

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == ' ' )
	{
	   _putchar('\n');
	}
	_putchar(s[i]);
	_putchar(s[i+1]);

	_puts_recursion(s);
}
