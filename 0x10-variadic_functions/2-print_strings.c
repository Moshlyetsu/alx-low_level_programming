#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -> must print strings, followed by a new line.
 * @separator: the string to be printed in between strings.
 * @n: the number of strings supplied to the function.
 * @...: variable number with strings to be printed.
 * Description: when separator is NULL, it is not printed.
 *              or when one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strng;
	unsigned int pos;

	va_start(strings, n);

	for (pos = 0; pos < n; pos++)
	{
		strng = va_arg(strings, char *);

		if (strng == NULL)
		{
			printf("(nil)");
		}	
		else
			printf("%s", strng);

		if (pos != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
