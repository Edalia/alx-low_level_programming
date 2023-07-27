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

  /*char separator[50] = "       ,.!;?\"(){}";*/
        int i = 0;
        int l = strlen(c);
        char a[100];
        
        while(i < l)
        {
	  *a[i] = c[i];
		i++;
	}

	return *a;
}
