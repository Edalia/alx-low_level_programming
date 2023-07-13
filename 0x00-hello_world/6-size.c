#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints sizes of various types
 *
 *Return: Always 0 (success)
 *
 */


int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
