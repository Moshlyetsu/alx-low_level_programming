#include "main.h"

/**
 * read_textfile -> Must read a text file and print out what it contains.
 * @filename: Points to the file name.
 * @letters: The number of letters to be read and printed.
 * Return: Must be number of letters printed ,
 * or else , returns 0 if It fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bffr;
	ssize_t opn_fl;
	ssize_t rd_fl;
	ssize_t wrt_fl;

	bffr = malloc(sizeof(char) * (letters));
	opn_fl = open(filename, O_RDONLY);
	rd_fl = read(opn_fl, bffr, letters);
	wrt_fl = write(STDOUT_FILENO, bffr, rd_fl);

	if (!filename)
		return (0);

	if (opn_fl == -1)
		return (0);

	if (!bffr)
		return (0);

	close(opn_fl);

	free(bffr);

	return (wrt_fl);
}
