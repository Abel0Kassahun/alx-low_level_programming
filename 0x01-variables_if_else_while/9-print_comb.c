#include <stdio.h>

/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

int main(void)
{
	char num = '/';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(++num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
