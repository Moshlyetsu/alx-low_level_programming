#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -> is for allocating memory with malloc.
 * @b: the number of bytes that must be allocated.
 * Return: the pointer to the allocated memory.
 */
 
void *malloc_checked(unsigned int b)
{
	void *pointr;

	pointr = malloc(b);

	if (pointr == NULL)
		exit(98);

	return (pointr);
}
