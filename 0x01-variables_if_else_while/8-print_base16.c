#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: print 0-9
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
