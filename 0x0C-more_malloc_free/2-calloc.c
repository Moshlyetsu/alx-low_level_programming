#include <stdlib.h>
#include "main.h"

/**
 * *_calloc -> must allocate memory for an array.
 * @nmemb: the number of elements in the array.
 * @size: the size of each element.
 * Return: pointer to allocated memory.
 */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *populate;
	unsigned int pos = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	populate = memory;

	for (; pos < (size * nmemb); pos++)
		populate[pos] = '\0';

	return (memory);
}
