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
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	putchar('\n');

	return (0);
}
