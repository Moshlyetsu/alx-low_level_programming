#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -> must  concatenate n bytes of a string to another string.
 * @s1: 1st given string to be added.
 * @s2: 2nd string to concatenate from.
 * @n: the number of bytes from s2 to concatenate to s1.
 * Return: the pointer to the resulting string. 
 */
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_lgnth;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int lgnth1 = 0;
	unsigned int lgnth2 = 0;

	while (s1 && s1[lgnth1])
		lgnth1++;
	while (s2 && s2[lgnth2])
		lgnth2++;

	if (n < lgnth2)
		str_lgnth = malloc(sizeof(char) * (lgnth1 + n + 1));
	else
		str_lgnth = malloc(sizeof(char) * (lgnth1 + lgnth2 + 1));

	if (!str_lgnth)
		return (NULL);

	while (x < lgnth1)
	{
		str_lgnth[x] = s1[x];
		x++;
	}

	while (n < lgnth2 && x < (lgnth1 + n))
		str_lgnth[x++] = s2[y++];

	while (n >= lgnth2 && x < (lgnth1 + lgnth2))
		str_lgnth[x++] = s2[y++];

	str_lgnth[x] = '\0';

	return (str_lgnth);
}
