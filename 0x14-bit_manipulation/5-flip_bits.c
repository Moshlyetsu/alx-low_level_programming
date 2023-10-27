#include "main.h"

/**
 * flip_bits -> Must count the number of bits to be changed.
 * to move from one position to the next.
 * @n: The first number to move from.
 * @m: The second number to move to.
 * Return: Must be the number of bits to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cntnr;
	unsigned long int xclusive = n ^ m;
	int i;
	int bts_to_chnge = 0;


	for (i = 63; i >= 0; i--)
	{
		cntnr = xclusive >> i;
		if (cntnr & 1)
			bts_to_chnge++;
	}

	return (bts_to_chnge);
}
