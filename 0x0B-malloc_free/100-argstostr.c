#include "main.h"
#include <stdlib.h>

/**
 * argstostr -> Is the main entry point of the program.
 * @ac: given integer input.
 * @av: given double pointer array.
 * Return:must be 0 or the returned string.
 */

char *argstostr(int ac, char **av)
{
	int e;
	int m;
	int q = 0;
	int k = 0;
	char *strng;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (m = 0; av[e][m]; m++)
			k++;
	}
	k += ac;

	strng = malloc(sizeof(char) * k + 1);

	if (strng == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (m = 0; av[e][m]; m++)
		{
		strng[q] = av[e][m];
		q++;
		}

		if (strng[q] == '\0')
		{
		strng[q++] = '\n';
		}

	}

	return (strng);
}
