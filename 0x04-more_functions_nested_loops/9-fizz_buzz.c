#include <stdio.h>
/**
 *main -Entry
 *
 *Description: print 1 -100, if multiple of 3 print 'Fizz',
 *if multiple of 5 print 'Buzz', if both multiple of 3 & 5, 'FizzBuzz'
 *
 *Return: void
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}

		i++;
	}
	putchar('\n');

	return (0);
}
