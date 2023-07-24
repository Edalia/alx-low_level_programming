#include "main.h"
/**
 *swap_int - swap values of integers a & b
 *@a: pointer giving address a
 *@b: pointer giving address b
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int val_a, val_b;

	val_a = *a;
	val_b = *b;

	*a = val_b;
	*b = val_a;
}
