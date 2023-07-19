#include "main.h"
/**
 *print_last_digit - prints last integer
 *@i: params to print last int
 *Return: (int) last integer
 */

int print_last_digit(int i)
{
	_putchar(i % 10);
	return (i % 10);
}
