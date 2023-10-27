#include "main.h"

/**
 * print_binary -> Must print the binary equivalent of a decimal number.
 * @n: Must be the number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int dcmal_num;
	int x;
	int bnry_cnvrsion = 0;


	for (x = 63; x >= 0; x--)
	{
		dcmal_num = n >> x;

		if (dcmal_num & 1)
		{
			_putchar('1');
			bnry_cnvrsion++;
		}
		else if (bnry_cnvrsion)
			_putchar('0');
	}
	if (!bnry_cnvrsion)
		_putchar('0');
}
