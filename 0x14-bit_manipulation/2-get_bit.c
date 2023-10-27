#include "main.h"

/**
 * get_bit -> Must return the value of a bit at a position in a decimal number.
 * @n: The Number to be searched for.
 * @index: The position of the bit.
 * Return: Must be the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
		return (-1);

	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
