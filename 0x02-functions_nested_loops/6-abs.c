#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the  absolute value of a number
 *
 * @n: any integer
 *
 * Return: absolute value of input
 *
 **/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
