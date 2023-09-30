#include <stdio.h>
#include "main.h"

/**
 * main -> for printing the name of the program.
 * @argc: the number of arguments passed.
 * @argv: Array containing arguments.
 * Return: Always 0 (Success)
 */
 
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
