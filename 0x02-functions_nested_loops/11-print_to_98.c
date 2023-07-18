#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print numbers to 98
 *
 *@n: start printing from this number
 *
 *Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
