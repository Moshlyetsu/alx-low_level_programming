#include "function_pointers.h"
/**
 * int_index ->will  return the position after comparison.
 * @array: the  array passed to the function.
 * @size: thd size of elements in the array.
 * @cmp: the pointer to function of one of the three in the main.
 * Return: must always be 0 on -> success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int pos;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (pos = 0; pos < size; pos++)
	{
		if (cmp(array[pos]))
			return (pos);
	}
	return (-1);
}
