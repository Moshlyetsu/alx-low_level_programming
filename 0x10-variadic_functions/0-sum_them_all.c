#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all ->must Return the Sum of all its Paramters.
 * @n: the Number of Paramters gave to the Function.
 * @...: the Variable Number of Paramters to Calculate the Sum of.
 * Return: must be 0 ,If n == 0 or else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	unsigned int parameter_sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		parameter_sum += va_arg(ap, int);

	va_end(ap);

	return (parameter_sum);
}
