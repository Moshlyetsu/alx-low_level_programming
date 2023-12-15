#include "main.h"
#include <stddef.h>

/**
 * _strchr -> the Entry point
 * @s: the inputed value
 * @c: the inputed value
 * Return: Success =  0 always
 */

char *_strchr(char *s, char c)
{

	for (int x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}

	return (0);
}
