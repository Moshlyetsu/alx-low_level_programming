#include "main.h"

/**
 * factorial -> Must Return the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: for If n > 0 - the factorial of n.
 *         or else If n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
