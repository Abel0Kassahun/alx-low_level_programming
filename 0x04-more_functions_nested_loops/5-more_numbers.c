#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14
 *
 * Return: void
 *
 **/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			_putchar(j);
		}
		for (j = 48 ; j < 53 ; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
