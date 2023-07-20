#include "main.h"
/**
*print_square - print hashes (#)
*@size: param to set number of hash
*Return: void
*/
void print_square(int size)
{
	int r = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (r < size)
		{
			int i = 0;

			while (i < size)
			{
				_putchar('#');
				i++;
			}

			_putchar('\n');
			r++;
		}
	}
}
