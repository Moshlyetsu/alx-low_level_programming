#include "main.h"

/**
 * _isdigit -> checks for a digit from 0 to 9
 * @c: inputed integer to be checked
 * Return:  if c is a digit return 1 if not 0
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
