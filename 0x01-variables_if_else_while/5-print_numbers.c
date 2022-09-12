#include <stdio.h>

/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

int main(void)
{
	char num = '0';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
