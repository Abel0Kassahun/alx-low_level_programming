#include <stdio.h>

/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(lowercase++);
	}
	for (i = 0 ; i < 26 ; i++)
	{
		putchar(uppercase++);
	}
	putchar('\n');
	return (0);
}
