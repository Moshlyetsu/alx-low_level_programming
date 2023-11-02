#include "main.h"

/**
 * create_file -> Must  create a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to the content to be write in the file.
 * Return: Must be 1 if it succed. or else -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int opn_fl;
	int wrt_fl;
	int lttr_count = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
	{
		for (lttr_count = 0; text_content[lttr_count];)
			lttr_count++;
	}

	opn_fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt_fl = write(opn_fl, text_content, lttr_count);

	if (opn_fl == -1 || wrt_fl == -1)
		return (-1);

	close(opn_fl);

	return (1);
}
