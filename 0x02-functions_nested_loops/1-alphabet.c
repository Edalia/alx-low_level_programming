#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *
 *Description - run program
 *
 *return 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - prints a-z
 *
 *Return (void)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
}
