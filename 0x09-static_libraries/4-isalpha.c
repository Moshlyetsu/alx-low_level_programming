#include "main.h"

/**
 *  * _isalpha -> will check for an alphabetic character.
 *   * @c: the given character to be checked.
 *    * Return: if c is a letter returns 1, or  otherwise 0.
 *     */

int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
