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
	int lttr_count;
	int wrt_fl;

	if (!filename)
		return (-1);

	opn_fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (opn_fl == -1)
		return (-1);

	if (!text_content)
	{
		for (lttr_count = 0; text_content[lttr_count]; lttr_count++)
			break;
	}

	wrt_fl = write(opn_fl, text_content, lttr_count);

	if (wrt_fl == -1)
		return (-1);

	close(opn_fl);

	return (1);
}
