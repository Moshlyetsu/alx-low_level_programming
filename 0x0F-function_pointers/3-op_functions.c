#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add ->must compute &  Return the sum of 2 numbers passed to it.
 * @a: The first number passed to the function to add.
 * @b: The second number passed to the function to add.
 * Return: The sum of a & b after operation.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub ->must compute &  Return the difference of 2 numbers passed to it.
 * @a: The first number passed to the function to subtract from.
 * @b: The second number passed to the function to subract.
 * Return: The difference of a & b after operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul ->must compute & Return the product of two numbers.
 * @a: The first number passed to the function to multiply.
 * @b: The second number passed to the function to multiply.
 * Return: The product of a & b after operation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -> must compute & Return the division of two numbers.
 * @a: The first number passed to the function to divide from.
 * @b: The second number passed to the function to divide with.
 * Return: The quotient of a & b after operation.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod ->must compute & Return the remainder of the division of two numbers.
 * @a: The first number passed to the function to get the remainder from.
 * @b: The second number passed to the function to get the remainder by.
 * Return: The remainder of the division ofa & b after operation.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
