#include "main.h"

/**
 * _islower -> checks inputed value if is a lowercase character
 * @c: inputed  character to be checked
 * Return: if c is lowercase 1 is returned if not 0 is returned otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
