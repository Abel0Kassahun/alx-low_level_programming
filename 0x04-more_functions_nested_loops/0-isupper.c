#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase or anything else
 *
 * @c: takes an ASCII value or just a character
 *
 * Return: (1) if the character is uppercase
 * and (0) if the character is anything else
 *
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
