#include <stdio.h>

/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar((char)i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
