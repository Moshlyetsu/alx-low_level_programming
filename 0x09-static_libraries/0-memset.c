#include "main.h"

/**
 * _memset -> to fill a block of memory with a specific value
 * @s: address of memory to be filled
 * @b: required value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{

	for (int x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
