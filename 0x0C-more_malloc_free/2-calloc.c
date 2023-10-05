#include <stdlib.h>
#include "main.h"

/**
 * *_memset -> must fill memory with a constant byte.
 * @s: the memory area that must be filled.
 * @b: the character  to be copied.
 * @n: the number of times that b must be copied.
 * Return: the pointer to the memory area s.
 */
 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	_putchar('\n');

	return (s);
}

/**
 * *_calloc -> must allocate memory for an array.
 * @nmemb: the number of elements in the array.
 * @size: the size of each element.
 * Return: pointer to allocated memory.
 */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pntr = malloc(size * nmemb);

	if (pntr == NULL)
	{
		return (NULL);
	}
	_memset(pntr, 0, nmemb * size);

	_putchar('\n');

	return (pntr);
}
