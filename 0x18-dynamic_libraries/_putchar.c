#include <unistd.h>

/**
 * _putchar -> to write the  c character to stdout
 * @c: character to be printed
 *
 * Return:  success returns 1.
 * On error, -1 is returned & errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
