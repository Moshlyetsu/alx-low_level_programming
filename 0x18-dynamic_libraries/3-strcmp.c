#include "main.h"

/**
 * _strcmp - compares the given string values
 * @s1: first given input string value
 * @s2: second given input string value
 * Return: compared string s1[i] - s2[i] or else 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}

	return (0);
}
