#include "main.h"

/**
 * _strlen -> returns back the length of a given string
 * @s: input string
 * Return: the length of input string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
