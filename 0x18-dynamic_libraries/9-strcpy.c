#include "main.h"

/**
 * char *_strcpy -> copies the string pointed to by src
 * @dest: destination of where to copy the pointed string
 * @src: destination of where to copy from
 * Return: the destination of where the string is copied from
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0;


	while (*(src + k) != '\0')
	{
		k++;
	}

	for (int y = 0; y < k; y++)
	{
		dest[y] = src[y];
	}

	dest[k] = '\0';

	return (dest);
}
