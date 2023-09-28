#include "main.h"

/**
 * _puts_recursion -> Must print a string, followed by a new line.
 * @s: The string that  must be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
