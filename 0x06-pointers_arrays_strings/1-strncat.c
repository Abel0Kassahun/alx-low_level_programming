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

	while (*(dest + d) != '\0')
	{
		++d;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++, d++)
	{
		*(dest + d) = *(src + i);
	}
	dest[d] = '\0';
	return (dest);
}
