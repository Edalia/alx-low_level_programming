#include "main.h"
#include <string.h>
/**
 *_strstr - find first occurence of substring in string
 *@haystack: string to check
 *@needle: substring param
 *Return: address of occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
