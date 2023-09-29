#include "main.h"

/**
 * _isupper -> checks uppercase letters
 * @c: input character to be checked
 *
 * Return: 0 or 1 acording to conditions
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
