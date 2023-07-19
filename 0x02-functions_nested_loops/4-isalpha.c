#include "main.h"
/**
 *_isalpha - checks if arg is an alphabet
 *@c: param to check
 *Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
