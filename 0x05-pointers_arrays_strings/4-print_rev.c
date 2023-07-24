#include "main.h"
#include <string.h>
/**
 *print_rev - print string value in reverse
 *@s: value param
 *Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
