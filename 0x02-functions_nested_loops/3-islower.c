#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _islower - checks if a charachter is lowercase or uppercase
 *
 * @c: takes an ASCII value or just a character
 *
 * Return: (1) if the character is lowercase
 * and (0) if the character is anything else
 *
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
