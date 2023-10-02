#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -> this function duplicates to the new memory space location.
 * @str: inputed character
 * Return: must be 0
 */

char *_strdup(char *str)
{
	char *new_mem_spce;
	int x = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	new_mem_spce = malloc(sizeof(char) * (x + 1));

	if (new_mem_spce == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		new_mem_spce[y] = str[y];

	return (new_mem_spce);
}
