#include <stdio.h>

/**
 * main- starting point
 *
 * Return: (0) Almost everytime
 *
 **/

int main(void)
{
	char lowercase = 'a';
	int i;

	for (i = 0 ; i < 24 ; i++)
	{
		if (i == 4 || i == 15)
			++lowercase;
		putchar(lowercase++);
	}

	putchar('\n');
	return (0);
}
