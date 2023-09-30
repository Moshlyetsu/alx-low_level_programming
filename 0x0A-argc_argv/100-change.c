#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -> it prints the number of coins required for change for an amount of money.
 * @argc: the number of arguments passed.
 * @argv: the array of arguments passed.
 * Return: 0 on ->(Success) &  1 on -> (Error)
 */
 
int main(int argc, char *argv[])
{
	int amnt;
	int x;
	int chnge;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amnt = atoi(argv[1]);
	chnge = 0;

	if (amnt < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && amnt >= 0; x++)
	{
		while (amnt >= coins[x])
		{
			chnge++;
			amnt -= coins[x];
		}
	}
	printf("%d\n", chnge);
	
	return (0);
}
