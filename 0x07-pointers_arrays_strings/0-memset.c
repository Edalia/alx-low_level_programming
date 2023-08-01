#include "main.h"
#include <string.h>
/**
*_memset - fill bytes of memory pointed by s
*@s: address
*@b: constant byte
*@n: number of memory bytes to print
*Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
