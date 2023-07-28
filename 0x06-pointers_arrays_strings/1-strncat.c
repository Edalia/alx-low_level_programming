#include "main.h"
#include <string.h>
/**
 *_strncat - concantenate string but use n bytes of s2
 *@dest: s1 string
 *@src: s2 string
 *@n: bytes
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
