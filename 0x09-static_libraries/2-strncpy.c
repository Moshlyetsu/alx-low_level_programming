#include "main.h"

/**
 * _strncpy -> copies a given string
 * @dest:the inputed value
 * @src: the inputed value
 * @n: the inputed value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}

	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
