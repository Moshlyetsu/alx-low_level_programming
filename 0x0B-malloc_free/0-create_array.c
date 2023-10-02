#include "main.h"
#include <stdlib.h>

/**
 * create_array -> must create an array of a given size and assign char c
 * @size: the given size of an array
 * @c: the character to be assigned
 * Description: creates array of a given size @size and assign character c
 * Return: must be a pointer to array or else NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *asgnd_str;
	unsigned int x;

	asgnd_str = malloc(sizeof(char) * size);

	if (size == 0 || asgnd_str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		asgnd_str[x] = c;
	return (asgnd_str);
}
