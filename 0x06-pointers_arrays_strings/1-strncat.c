#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings and returns a pointer to an array
 *
 * @dest: destination char pointer
 * @src: source char pointer
 * @n: the number of characters from src that users want to put into dest
 *
 * Return: pointer to char
 *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int i;

	/*
	if (sizeof(src) < n)
	{
		n = sizeof(src);
	}
	*/
	while (*(dest + d) != '\0')
	{
		++d;
	}
	for (i = 0 ; i < n  ; i++, d++)
	{
		*(dest + d) = *(src + i);
	}
	return (dest);
}
