#include<stdio.h>
#include "../../_putchar.c/_putchar.c"
/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/
void print__putchar (void)
{
	printf("_putchar\n");
}
void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
