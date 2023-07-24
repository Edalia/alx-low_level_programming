#include "main.h"
#include <string.h>

/**
 *rev_string - reverse string
 *@s: pointer of param
 *Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
