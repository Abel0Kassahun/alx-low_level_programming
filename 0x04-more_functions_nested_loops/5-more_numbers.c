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
	char num[] = {'1', '0', '1', '1', '1', '2', '1', '3', '1', '4', '\0'};

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			_putchar(j);
		}
		for (j = 0 ; j < 10 ; j++)
		{
			_putchar(num[j]);
		}
		_putchar('\n');
	}
}
