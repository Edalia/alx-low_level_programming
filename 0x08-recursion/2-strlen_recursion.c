#include "main.h"
#include <string.h>
/**
 *_strlen_recursion - return number of char in string
 *@s: string
 *Return: int (number of char)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (i == *s[i-1])
	  return s[i];

	_strlen_recursion(s[i]);
	i++;
}
