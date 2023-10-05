#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit -> must check if a string contains a non-digit character or not.
 * @s: the input string that mus be checked.
 * Return: if a non-digit is found = 0 or else = 1 
 */
 
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen -> must determine an return the length of a given string.
 * @s: the given string to be checked.
 * Return: the length of the string
 */
 
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors -> manages errors at main.
 */
 
void errors(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * main ->will multiply two positive numbers together.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: must always be 0 on ->(Success)
 */
 
int main(int argc, char *argv[])
{
	char *s1;
	char *s2;
	int lgnth1, lgnth2, lgnth, x, carry, digit1, digit2, *result;
	int y = 0;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lgnth1 = _strlen(s1);
	lgnth2 = _strlen(s2);
	lgnth = lgnth1 + lgnth2 + 1;
	result = malloc(sizeof(int) * lgnth);
	
	if (!result)
		return (1);
	for (x = 0; x <= lgnth1 + lgnth2; x++)
		result[x] = 0;
	for (lgnth1 = lgnth1 - 1; lgnth1 >= 0; lgnth1--)
	{
		digit1 = s1[lgnth1] - '0';
		carry = 0;
		for (lgnth2 = _strlen(s2) - 1; lgnth2 >= 0; lgnth2--)
		{
			digit2 = s2[lgnth2] - '0';
			carry += result[lgnth1 + lgnth2 + 1] + (digit1 * digit2);
			result[lgnth1 + lgnth2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lgnth1 + lgnth2 + 1] += carry;
	}
	for (x = 0; x < lgnth - 1; x++)
	{
		if (result[x])
			y = 1;
		if (y)
			_putchar(result[x] + '0');
	}
	
	if (!y)
	_putchar('0');
	_putchar('\n');
	free(result);

	return (0);	
}
