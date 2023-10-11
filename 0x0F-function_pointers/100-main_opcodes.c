#include <stdio.h>
#include <stdlib.h>

/**
 * main -> must print its own opcodes.
 * @argc:the number of arguments passed.
 * @argv: the array of arguments passed.
 * Return: must Always be 0 on ->(Success).
 */
int main(int argc, char *argv[])
{
	int bytes;
	int pos;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (pos = 0; pos < bytes; pos++)
	{
		if (pos == bytes - 1)
		{
			printf("%02hhx\n", arr[pos]);
			break;
		}
		printf("%02hhx ", arr[pos]);
	}
	printf("\n");
	return (0);
}
