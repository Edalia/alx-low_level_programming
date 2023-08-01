#include "main.h"
#include <string.h>
/**
 *_strpbrk - searches a string for any occurrence of a set of bytes
 *@s: string to check occurrence of bytes in @accept
 *@accept: bytes to search
 *Return: char(address of the occurrence of string)
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
