#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverse array elements
 *@a: array param
 *@n: number of elements
 *Return: void
 */
void reverse_array(int *a, int n)
{

	int i = 0;
	int l = (n - 1);

	while (i < l)
	{
		int t = a[i];

		a[i] = a[l];
		a[l] = t;

		l--;
		i++;
	}
}
