#include "main.h"

/**
 * _strncat -> concatenates two strings into 1
 * with most n bytes from src
 * @dest:  value to be inputed
 * @src: value to be inputed
 * @n: value to be inputed
 *
 * Return: the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{

		dest[x] = src[y];

	x++;
	y++;
	}

	dest[x] = '\0';

	return (dest);
}
