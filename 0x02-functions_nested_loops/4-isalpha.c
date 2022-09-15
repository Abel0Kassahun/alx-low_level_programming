#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if a charachter is letter or not
 *
 * @c: takes an ASCII value or just a character
 *
 * Return: (1) if the character is a letter
 * and (0) if the character is anything else
 *
 **/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
