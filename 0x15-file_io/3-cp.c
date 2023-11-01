#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer -> Must allocate a 1024 bytes for a buffer.
 * @file: The name of the file that the buffer is storing characters for.
 * Return: Must be a pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *bffr;

	bffr = malloc(sizeof(char) * 1024);

	if (bffr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bffr);
}

/**
 * close_file -> Must close a file descriptors.
 * @fl_dscrptr: The file descriptor that must be closed.
 */
void close_file(int fl_dscrptr)
{
	int cls;

	cls = close(fl_dscrptr);

	if (!cls)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fl_dscrptr %d\n", fl_dscrptr);
		exit(100);
	}
}

/**
 * main -> Must Copy the contents of a file from 1 to another file.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers containing arguments.
 * Return: Must be 0 if successful.
 *
 */
int main(int argc, char *argv[])
{
	int from, to;
	int rd_fl, wrt_fl;
	char *bffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bffr = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd_fl = read(from, bffr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd_fl == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bffr);
			exit(98);
		}

		wrt_fl = write(to, bffr, rd_fl);
		if (to == -1 || wrt_fl == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bffr);
			exit(99);
		}

		rd_fl = read(from, bffr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd_fl > 0);

	free(bffr);
	close_file(from);
	close_file(to);

	return (0);
}
