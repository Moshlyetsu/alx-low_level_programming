#include "main.h"

/**
 * clear_bit -> Must set the value of a given bit to be 0.
 * @n: The pointer to the number that must be changed.
 * @index: The position of the bit to make 0.
 * Return: Must be 1 if success,
 * or else -1 if it fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
