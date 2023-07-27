#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 *string_toupper - convert string to uppercase
 *@c: array to convert
 *Return: char[] (converted array)
 */
char *string_toupper(char *c)
{
	int len = strlen(c);
	int i = 0;

	while (i < len)
	{
		char u = toupper(c[i]);

		c[i] = u;
		i++;
	}

	return (c);
}
