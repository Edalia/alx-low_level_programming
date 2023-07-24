#include "main.h"
#include <stdio.h>
/**
 *print_array - print elements in order
 *@a: array param
 *@n: number of elements to print
 *Return: void
 */
void print_array(int *a, int n)
{
	int l = n - 1;
	int i = 0;

	while (i <= l)
	{
		if (i < l)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

		i++;
	}

	printf("\n");
}
