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
	char alphabets = 'a';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(num++);
	}
	for (i = 0 ; i < 6 ; i++)
	{
		putchar(alphabets++);
	}
	putchar('\n');
	return (0);
}
