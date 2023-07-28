#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
*cap_string - capitalises words
*@c: string with words
*Return: char[] (capitalised words)
*/
char *cap_string(char *c)
{
	char separator[50] = "       ,.!;?\"(){}";
	char *word[100];
	char cpy[100] = strtok(c, separator);
	strcpy(word, cpy);

	 return word;
}
