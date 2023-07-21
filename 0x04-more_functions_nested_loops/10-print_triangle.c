#include "main.h"

void print_triangle(int size)
{
	int i, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		
		while(i < size)
		{	
			t = 0;
			while (t < size){
				_putchar('#');
				t++;
			}

			i++;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
