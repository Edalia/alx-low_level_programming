#include <stdio.h>
/**
 *main - Entry point
 *
 *Description - print alphabets
 *
 *Return 0 - (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);

	printf("\n");
	return (0);
}
