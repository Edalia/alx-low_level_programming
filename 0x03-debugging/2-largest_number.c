#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b) || (a == b && b > c))
	{
		largest = a;
	}
	else if ((a == b && b == c) || (a == b && b > c) || (a == c && c > b))
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}
	else if (b == c && c > a)
	{
		largest = b;
	}

	return (largest);
}
