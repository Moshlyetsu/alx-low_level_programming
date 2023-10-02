#include <stdlib.h>
#include "main.h"

/**
 * count_word -> counts the number of words in a given string.
 * @s: the given string to be checked.
 *
 * Return: the number of words found in a given string checked
 */

int count_word(char *s)
{

	int chckr = 0, l, m = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == ' ')
			chckr = 0;

		else if (chckr == 0)
		{
			chckr = 1;
			m++;
		}
	}

	return (m);
}

/**
 * **strtow -> must splits a given string into separate words
 * @str: given string to be split
 * Return: must be pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrx, *tmp;
	int x, wrdz, bgn, end, k = 0, c = 0, lgnth = 0;

	while (*(str + lgnth))
		lgnth++;
	wrdz = count_word(str);
	if (wrdz == 0)
		return (NULL);
	matrx = (char **) malloc(sizeof(char *) * (wrdz + 1));
	if (matrx == NULL)
		return (NULL);
	for (x = 0; x <= lgnth; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				return (NULL);

				while (bgn < end)
					{
					*tmp++ = str[bgn++];
					*tmp = '\0';
					}
				matrx[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		bgn = x;
	}
	matrx[k] = NULL;
	return (matrx);
}
