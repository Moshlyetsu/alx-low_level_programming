#include "main.h"

/**
 * _strstr - the entry point
 * @haystack: inputed character
 * @needle: inputed character
 * Return: must Always be 0 if (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
		return (haystack);
	}

	return (0);
}
