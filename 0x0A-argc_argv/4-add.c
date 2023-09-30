#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num -> checks the string if there are digit.
 * @str: the array of strings to be checked.
 * Return:will Always be 0 on -> (Success)
 */
 
int check_num(char *str)
{
	
	unsigned int chck=0;

	while (chck < strlen(str))

	{
		if (!isdigit(str[chck])) 
		{
			return (0);
		}

		chck++;
	}
	return (1);
}

/**
 * main -> will Print the output.
 * @argc: for Counting arguments.
 * @argv: the Arguments passed.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int count = 1;
	int strng_to_int;
	int sum = 0;

	while (count < argc) 
	{
		if (check_num(argv[count]))

		{
			strng_to_int = atoi(argv[count]);
			sum += strng_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
