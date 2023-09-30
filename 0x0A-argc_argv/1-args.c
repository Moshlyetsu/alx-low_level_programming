#include <stdio.h>
#include "main.h"

/**
 * main -> for printing the number of arguments given to the program.
 * @argc: the number of arguments passed to the program.
 * @argv: the array of arguments.
 * Return: must Always be 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
