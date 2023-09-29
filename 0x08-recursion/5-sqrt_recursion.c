#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt ->Must Find the natural square root of a given number.
 * @num: The given number to find the square root of.
 * @root: The given root that must be tested.
 * Return: The square root ->if the number has a natural square root.
 *         or else  -1 -> If the number does not have a natural square root .
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion -> Must Return the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: The natural square root of n -> If n has a natural square root.
 *         or else -1 -> If n does not have a natural square root .
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
