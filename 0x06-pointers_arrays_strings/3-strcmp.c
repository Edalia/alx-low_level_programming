#include "main.h"
/**
 *_strcmp - compare string
 *@s1: dest string
 *@s2: src string
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (15);

	else if (s1 == s2)
		return (0);

	else if (s1 < s2)
		return (-15);

	else
		return (0);
}
