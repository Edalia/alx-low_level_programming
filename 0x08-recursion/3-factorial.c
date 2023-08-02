#include "main.h"
/**
 *factorial - return factorial of integer
 *@n: int param
 *Return: int (factorial)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
