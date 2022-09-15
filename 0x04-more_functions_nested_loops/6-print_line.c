#include <stdio.h>
#include "main.h"

/**
 * print_line - prints '_' n number of times
 *
 * @n: number of times a user wants to print '_'
 * 
 * Return: void
 *
 **/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
