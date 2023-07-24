#include "main.h"
#include <string.h>
/**
 *puts_half - prints half of the string
 *@str: string to print half
 *Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half;

	if (len % 2 == 0)
		half = (len / 2);
	else
		half = ((len - 1) / 2) + 1;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
