#include "main.h"
#include <string.h>
/**
 *_strlen_recursion - return number of char in string
 *@s: string
 *Return: int (number of char)
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
