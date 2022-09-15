#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints '\' diagonally n number of times
 *
 * @n: number of times a user wants to print '\' diagonally
 *
 * Return: void
 *
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
