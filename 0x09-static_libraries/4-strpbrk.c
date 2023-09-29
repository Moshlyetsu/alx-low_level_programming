#include "main.h"
/**
 * _strpbrk - the entry point
 * @s: first input character
 * @accept: accepted input character
 * Return: must  Always be 0 on ->(Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			return (s);
		}

		s++;
	}

	return ('\0');
}
