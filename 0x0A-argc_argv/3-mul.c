#include <stdio.h>
#include "main.h"

/**
 * _atoi -> will convert a str to an int.
 * @s: the string to be converted into an int.
 * Return: the int converted from the string
 */
 
int _atoi(char *s)
{
	
	int x = 0;
	int y = 0;
	int z = 0;
	int lgnth = 0;
	int c = 0;
	int digit = 0;

	while (s[lgnth] != '\0')
		lgnth++;

	while (x < lgnth && c == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			c = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			c = 0;
		}
		x++;
	}

	if (c == 0)
		return (0);

	return (z);
}

/**
 * main -> will multiply 2 numbers passed to it.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: 0 (Success), 1 (Error)
 */
 
int main(int argc, char *argv[])
{
	int rslt;
	int nm1, nm2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	rslt = nm1 * nm2;

	printf("%d\n", rslt);

	return (0);
}
