#include "main.h"

/**
 * _strcat ->to concatenate two strings
 * @dest:  value to be  inputed
 * @src:  value to be inputed
 *
 * Return: must be void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
