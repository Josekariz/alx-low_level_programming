#include "main.h"

/**
 * append_text_to_file - Inserts text at the end of a file.
 * @filename: A pointer to the name of file.
 * @text_content: The string to add to the end.
 *
 * Return: Function : fails | filename is NULL - : -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, lent);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
