#include "main.h"

/**
 * _strlen_recursion -> Must return the length of a given string.
 * @s: The given string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
