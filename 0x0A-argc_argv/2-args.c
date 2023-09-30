#include <stdio.h>
#include "main.h"

/**
 * main -> it will print all the arguments passed to it.
 * @argc: the number of arguments passed to main.
 * @argv: the array of arguments.
 * Return: Always 0 (Success)
 */
 
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
