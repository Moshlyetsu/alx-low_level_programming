#include "main.h"

/**
 * _pow_recursion -> Must return the value of x raised to the power of y.
 * @x: The number that must be raised to the power .
 * @y: The power to raise.
 * Return: Must be the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
