#include "main.h"
#include <string.h>
/**
 *_strcmp - compare string
 *@s1: dest string
 *@s2: src string
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (strcmp(s2, s1));

	else if (s1 == s2)
		return (strcmp(s2, s1));

	else if (s1 < s2)
		return (strcmp(s2, s1));

	else
		return (0);
}
