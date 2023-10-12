#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers ->must print numbers, followed by a new line.
 * @separator: the string that must be printed between numbers.
 * @n: the number of integers supplied to the function.
 * @...:  variable number with numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbrs;
	unsigned int pos;

	va_start(numbrs, n);

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", va_arg(numbrs, int));

		if (pos != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbrs);
}
