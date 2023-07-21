#include "main.h"
/**
 *print_triangle - print triangle shape
 *
 *@size: param to decide number
 *
 *Return: void
 */
void print_triangle(int size)
{
	int i, g, n;
	int print_hash, print_space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		n = 1;

		while (n <= size)
		{
			i = 1;
			g = 1;

			print_hash = size - (size - n); /*10 - 9 = 1*/
			print_space = size - print_hash; /*10 - 1 = 9*/

			while (i <= print_space) /*0 <= 9*/
			{
				_putchar(' ');
				i++;
			}

			while (g <= print_hash)
			{
				_putchar('#');
				g++;
			}
			_putchar('\n');

			n++;
		}

	}
}
