#include "main.h"

/**
 * binary_to_uint -> Must convert a binary number to unsigned integer.
 * @b: The string that containins the binary number.
 * Return: Must be the converted number.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int cnvrtd_bnry = 0;
	int x = 0;


	if (!b)
		return (0);

	for (; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		cnvrtd_bnry = 2 * cnvrtd_bnry + (b[x] - '0');
	}

	return (cnvrtd_bnry);
}
