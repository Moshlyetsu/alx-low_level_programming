#include "main.h"

/**
 * get_endianness -> Must check if a machine is little or big endian.
 * Return: Must be 0 for big, or else 1 for little.
 */
int get_endianness(void)
{
	char *chr = (char *) &l;
	unsigned int l = 1;


	return (*chr);
}
