#include <unistd.h>

/**
 * _putchar -> Must write the character c to stdout.
 * @c: The character that must be printed.
 * Return: Must be 1 -> On success.
 * or else On error -> -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
