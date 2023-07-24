#include "main.h"
#include <stdio.h>

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
