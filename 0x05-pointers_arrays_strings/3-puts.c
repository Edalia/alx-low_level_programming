#include "main.h"
#include <string.h>
/**
 *_puts - print string value
 *@str: value param
 *Return: void
 */
void _puts(char *str)
{
	int len = strlen(str), i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
