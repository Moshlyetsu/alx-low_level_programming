#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -> must print all characters.
 * @format: the list of types of arguments passed to the function 
 *	pointing to must be printed characters.
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *strng;
	char *seprtr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", seprtr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seprtr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seprtr, va_arg(list, double));
					break;
				case 's':
					strng = va_arg(list, char *);
					if (!strng)
						strng = "(nil)";
					printf("%s%s", seprtr, strng);
					break;
				default:
					x++;
					continue;
			}
			seprtr = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
