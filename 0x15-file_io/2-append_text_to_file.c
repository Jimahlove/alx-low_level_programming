#include "main.h"

/**
 * append_text_to_file -text  append at the end of a file.
 * @filename: pointer to name of the file.
 * @text_content: string to add to end of file.
 *
 * Return: If the function fails or filename is NULL -1.
 *         If the file does not exist - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	r = write(o, text_content, len);

	if (q == -1 || r == -1)
		return (-1);

	close(o);

	return (1);
}


