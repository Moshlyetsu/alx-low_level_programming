#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen -> Must return the length of a given string.
 * @s: The given string that must be measured.
 * Return: Must be the length of the given measured string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome -> Must Check if a given string is a palindrome.
 * @s: The given string to be checked if is a palindrome or not.
 * @len: The length of the given string.
 * @index: The index of the given string that must be checked.
 * Return: Must be 1 -> If the string is a palindrome.
 *         or else 0 -> If the string is not a palindrome.
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome -> Must Check if a given string is a palindrome or not .
 * @s: The given string to be checked.
 * Return: Must be 1 -> If the string is a palindrome.
 *         or else 0 -> If the string is not a palindrome.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
