#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings and returns a pointer to an array
 *
 * @dest: destination char pointer
 * @src: source char pointer
 *
 * Return: pointer to char
 *
 **/

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int i;

	while (*(dest + d) != '\0')
	{
		++d;
	}
	for (i = 0 ; *(src + i) != '\0' ; i++, d++)
	{
		*(dest + d) = *(src + i);
	}
	return (dest);
}
