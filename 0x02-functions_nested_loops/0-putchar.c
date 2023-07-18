#include <stdio.h>
#include <string.h>
/**
 *main - Entry
 *
 *Description: print string
 *
 *Return: 0
 */

int main(void)
{
	char string[50] = "_putchar";
	int i = 6;
	int len = strlen(string);

	for (i = 0; i < len; i++)
		putchar(string[i]);

	putchar('\n');

	return (0);
}
