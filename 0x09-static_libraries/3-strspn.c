#include "main.h"

/**
 * _strspn -> the entry point
 * @s: given input value
 * @accept: inputed value
 * Return: must Always be 0 on-> (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				a++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
