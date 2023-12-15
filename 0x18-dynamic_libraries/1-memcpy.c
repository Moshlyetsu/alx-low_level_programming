#include "main.h"

/**
 *_memcpy ->function to copy memory space
 *@dest: location of memory to stored
 *@src: location of memory to be copied
 *@n: the number of bytes
 *
 *Return: memory  copied with n byte changes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = n;

	for (int x = 0; x < y; x++)
	{
		dest[x] = src[x];
		y--;
	}

	return (dest);
}
