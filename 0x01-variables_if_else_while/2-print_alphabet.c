#include <stdio.h>

/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

int main(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(alphabet++);
	}
	putchar('\n');
	return (0);
}
