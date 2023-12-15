#include "main.h"

/**
 * _atoi -> function to convert a str into an int.
 *
 * @s: input string to be converted into an integer.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	unsigned int rslt = 0;
	int sgn = 1;
	int l = 0;


	while (!(s[l] <= '9' && s[l] >= '0') && s[l] != '\0')
	{
		if (s[l] == '-')
			sgn *= -1;
		l++;
	}

	while (s[l] <= '9' && (s[l] >= '0' && s[l] != '\0'))
	{
		rslt = (rslt * 10) + (s[l] - '0');
		l++;
	}
	rslt *= sgn;

	return (rslt);
}
