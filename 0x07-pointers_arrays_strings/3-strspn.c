#include "main.h"
#include <string.h>
/**
*_strspn - gets the length of a prefix substring
*@s: string param
*@accept: prefix param
*Return: number of bytes in s which contain bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
