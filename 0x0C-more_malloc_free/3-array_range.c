#include <stdlib.h>
#include "main.h"

/**
 * *array_range -> must create an array of integers.
 * @min: the minimum range of values to be stored.
 * @max: the maximum range of values stored & number of elements.
 * Return: pointer to the new array.
 */
 
int *array_range(int min, int max)
{
	int *nw_arry_pntr;
	int x;
	int syz;

	if (min > max)
		return (NULL);

	syz = max - min + 1;
	nw_arry_pntr = malloc(sizeof(int) * syz);

	if (nw_arry_pntr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		nw_arry_pntr[x] = min++;
	}


	return (nw_arry_pntr);
}
