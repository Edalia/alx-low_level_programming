#include "main.h"
/**
 *_isupper - checks if character is uppercase
 *@c: param to check
 *Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
