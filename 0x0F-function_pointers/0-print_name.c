#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name ->will print the name using pointer to function method.
 * @name: the given string to print.
 * @f: the pointer to function.
 * Return: will always be nothing on -> success.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
