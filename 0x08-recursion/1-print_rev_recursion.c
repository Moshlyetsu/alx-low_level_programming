#include "main.h"

/**
 * _print_rev_recursion -Must Print a given string in reverse.
 * @s: The given string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
