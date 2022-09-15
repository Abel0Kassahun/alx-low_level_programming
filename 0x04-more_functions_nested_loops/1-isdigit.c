#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if a character is a number or anything else
 *
 * @c: takes an ASCII value or just a character
 *
 * Return: (1) if the character is a number
 * and (0) if the character is anything else
 *
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
