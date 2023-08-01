#include "main.h"
#include <string.h>
/**
*_memcpy - copy bytes of memory from src to dest
*@dest: copy to
*@src: copy from
*@n: number of bytes to copy
*Return: char (address of dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
