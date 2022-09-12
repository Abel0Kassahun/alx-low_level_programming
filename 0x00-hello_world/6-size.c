#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	float f;

	printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
