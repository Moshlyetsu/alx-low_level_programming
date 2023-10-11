#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator ->for printing each array element on a newline.
 * @array: the array given to the function.
 * @size: the number of elements to print.
 * @action: the pointer to be printed.
 * Return: must be void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
