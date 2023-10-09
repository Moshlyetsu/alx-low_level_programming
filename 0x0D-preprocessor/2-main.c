#include <stdio.h>

/**
 * main -> will print the name of the file
 * it was executed from.
 * Return: must always be 0 on ->(Success).
 */
 
int main(void)
{
	
	printf("%s\n", __FILE__);
	
	return (0);
}
