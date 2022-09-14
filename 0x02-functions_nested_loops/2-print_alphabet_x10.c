#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

void print_alphabet_x10(void)
{
	char c;
	int i;
	int j;

	for(i = 0 ; i < 10 ;i++)
	{
		c = 'a';
		for (j = 0 ; j < 26 ; j++)
		{
			_putchar(c);
			++c;
		}
		_putchar('\n');
	}
}
