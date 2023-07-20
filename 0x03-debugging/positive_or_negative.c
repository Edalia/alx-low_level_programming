#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Description: print number whether negative, positive, or zero
 *
 *Return: 0 (success)
 */
/*int main(void)*/
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}
