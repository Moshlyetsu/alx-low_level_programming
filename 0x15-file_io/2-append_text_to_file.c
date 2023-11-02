#include "main.h"

/**
 * append_text_to_file -> Must append text at the end of a file.
 * @filename: Points to the file name..
 * @text_content: The content to be added at the end of the file.
 * Return: Must be 1 if the file exists,
 * or else be -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn_fl;
	int wrt_fl;
	int lttr_count;

	if (!filename)
		return (-1);

	opn_fl = open(filename, O_WRONLY | O_APPEND);

	if (opn_fl == -1)
		return (-1);

	if (text_content)
	{
		for (lttr_count = 0; text_content[lttr_count]; lttr_count++)
			break;

		wrt_fl = write(opn_fl, text_content, lttr_count);

		if (wrt_fl == -1)
			return (-1);
	}

	close(opn_fl);

	return (1);
}
