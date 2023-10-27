#include "main.h"

/**
 * set_bit -> Must set a bit at a given position to 1.
 * @n: The pointer to the number that must be changed.
 * @index: The position of the bit that must be set to 1.
 * Return: Must be 1 if success,
 * or else -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
